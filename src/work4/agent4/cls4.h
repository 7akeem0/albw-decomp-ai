#ifndef AGENT4_CLS4_H
#define AGENT4_CLS4_H
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef signed int s32;
typedef float f32;

namespace sead {
namespace RuntimeTypeInfo {
class Interface {
public:
    Interface() {}
    virtual bool isDerived(const Interface* typeInfo) const = 0;
};
template <typename T>
class Root : public Interface {
public:
    Root() {}
    virtual bool isDerived(const Interface* typeInfo) const;
};
class RootN : public Interface {
public:
    RootN() {}
    virtual bool isDerived(const Interface* typeInfo) const;
};
}
}

struct HandleObj {
    virtual bool checkDerivedRuntimeTypeInfo(const sead::RuntimeTypeInfo::Interface* t) const;
};

template <typename T>
inline bool IsDerivedFrom(const HandleObj* obj) {
    const sead::RuntimeTypeInfo::Interface* ti = T::getRuntimeTypeInfoStatic();
    return obj != 0 && obj->checkDerivedRuntimeTypeInfo(ti);
}
template <typename T>
inline T* DynamicCast(HandleObj* obj) {
    if (IsDerivedFrom<T>(obj))
        return static_cast<T*>(obj);
    return 0;
}

#define TYPEINFO_ROOTN(CLS)     static const sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfoStatic() {         static const sead::RuntimeTypeInfo::RootN typeInfo;         return &typeInfo;     }
#define TYPEINFO_ROOT(CLS) \
    static const sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfoStatic() { \
        static const sead::RuntimeTypeInfo::Root<CLS> typeInfo; \
        return &typeInfo; \
    }

struct HandleMgr {};
HandleObj* func_0052FBA0(HandleMgr* mgr, u32 handle);

struct Game {
    char pad[0x3dbbc];
    HandleMgr handles;
};
extern Game* data_00706E20;

#endif
