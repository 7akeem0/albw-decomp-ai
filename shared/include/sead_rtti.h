// Run-time type information for sead-style class trees (ALBW stand-in).
//
// A tree has one root, declared with SEAD_RTTI_BASE. Every other class declares
// SEAD_RTTI_OVERRIDE and names its direct parent. Each class hands out a
// function-local static type-info object. Subtype tests walk the parent chain
// through isDerived(), so a check is a pointer comparison per level.
//
//   struct Actor { SEAD_RTTI_BASE(Actor) };
//   struct Enemy : Actor { SEAD_RTTI_OVERRIDE(Enemy, Actor) };

#ifndef ALBW_SEAD_RTTI_STANDIN_H
#define ALBW_SEAD_RTTI_STANDIN_H

namespace sead {
namespace RuntimeTypeInfo {

// Abstract node of the type-info graph.
struct Interface {
    virtual bool isDerived(Interface const* ti) const = 0;
};

// Type-info of a tree root: it matches only itself.
struct Root : Interface {
    Root() : Interface() {}
    virtual bool isDerived(Interface const* ti) const { return ti == this; }
};

// Type-info of a class whose direct parent is Parent.
template <typename Parent>
struct Derive : Interface {
    Derive() : Interface() {}
    virtual bool isDerived(Interface const* ti) const {
        if (ti == this) return true;
        return Parent::getRuntimeTypeInfoStatic()->isDerived(ti);
    }
};

}
}

// Root of a tree. OWNER is the class being declared.
#define SEAD_RTTI_BASE(OWNER) \
public: \
    static sead::RuntimeTypeInfo::Interface const* getRuntimeTypeInfoStatic() { \
        static sead::RuntimeTypeInfo::Root const info; \
        return &info; \
    } \
    static bool checkDerivedRuntimeTypeInfoStatic(sead::RuntimeTypeInfo::Interface const* ti) { \
        return OWNER::getRuntimeTypeInfoStatic() == ti; \
    } \
    virtual bool checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const* ti) const { \
        return checkDerivedRuntimeTypeInfoStatic(ti); \
    } \
    virtual sead::RuntimeTypeInfo::Interface const* getRuntimeTypeInfo() const { \
        return OWNER::getRuntimeTypeInfoStatic(); \
    }

// Non-root class. OWNER is the class being declared, SUPER its direct parent.
#define SEAD_RTTI_OVERRIDE(OWNER, SUPER) \
public: \
    static sead::RuntimeTypeInfo::Interface const* getRuntimeTypeInfoStatic() { \
        static sead::RuntimeTypeInfo::Derive<SUPER> const info; \
        return &info; \
    } \
    static bool checkDerivedRuntimeTypeInfoStatic(sead::RuntimeTypeInfo::Interface const* ti) { \
        return OWNER::getRuntimeTypeInfoStatic() == ti ? true : SUPER::checkDerivedRuntimeTypeInfoStatic(ti); \
    } \
    virtual bool checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const* ti) const { \
        return checkDerivedRuntimeTypeInfoStatic(ti); \
    } \
    virtual sead::RuntimeTypeInfo::Interface const* getRuntimeTypeInfo() const { \
        return OWNER::getRuntimeTypeInfoStatic(); \
    }

#endif  // ALBW_SEAD_RTTI_STANDIN_H
