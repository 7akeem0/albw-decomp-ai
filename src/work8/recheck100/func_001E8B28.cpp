 
namespace sead {
namespace RuntimeTypeInfo {
class Interface {
public:
    Interface() {}
    virtual bool isDerived(const Interface* typeInfo) const = 0;
};
class Root : public Interface {
public:
    Root() {}
    virtual bool isDerived(const Interface* typeInfo) const { return typeInfo == this; }
};
template <typename BaseType>
class Derive : public Interface {
public:
    Derive() {}
    virtual bool isDerived(const Interface* typeInfo) const {
        if (this == typeInfo) return true;
        return BaseType::getRuntimeTypeInfoStatic()->isDerived(typeInfo);
    }
};
}  
}  


typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef float f32;
template <class D, class T> inline bool IsDerivedFrom(const T* o)
{
    const sead::RuntimeTypeInfo::Interface* ti = D::getRuntimeTypeInfoStatic();
    return o != 0 && o->checkDerivedRuntimeTypeInfo(ti);
}
template <class D, class T> inline D* DynamicCast(T* o)
{
    if (IsDerivedFrom<D, T>(o)) return static_cast<D*>(o);
    return 0;
}
struct Base { public: static const sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfoStatic() { static const sead::RuntimeTypeInfo::Root typeInfo; return &typeInfo; } static bool checkDerivedRuntimeTypeInfoStatic(const sead::RuntimeTypeInfo::Interface* typeInfo) { const sead::RuntimeTypeInfo::Interface* clsTypeInfo = Base::getRuntimeTypeInfoStatic(); return clsTypeInfo == typeInfo; } virtual bool checkDerivedRuntimeTypeInfo(const sead::RuntimeTypeInfo::Interface* typeInfo) const { return checkDerivedRuntimeTypeInfoStatic(typeInfo); } virtual const sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfo() const { return getRuntimeTypeInfoStatic(); } };
struct E : Base { public: static const sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfoStatic() { static const sead::RuntimeTypeInfo::Derive<Base> typeInfo; return &typeInfo; } static bool checkDerivedRuntimeTypeInfoStatic(const sead::RuntimeTypeInfo::Interface* typeInfo) { const sead::RuntimeTypeInfo::Interface* clsTypeInfo = E::getRuntimeTypeInfoStatic(); return clsTypeInfo == typeInfo ? true : Base::checkDerivedRuntimeTypeInfoStatic(typeInfo); } virtual bool checkDerivedRuntimeTypeInfo(const sead::RuntimeTypeInfo::Interface* typeInfo) const { return checkDerivedRuntimeTypeInfoStatic(typeInfo); } virtual const sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfo() const { return getRuntimeTypeInfoStatic(); } u8 pad[0x108 - 4]; f32 m108; u8 pad2[0x2d0 - 0x10c]; };
struct Arr { E items[5]; E* get(s32 i) { return &items[i]; } };
struct Self { u8 pad[0x14]; Arr arr; u8 pad2[0xc]; s32 mE30; };
extern "C" void func_001E8B28(Self* self);
void func_001E8B28(Self* self)
{
    for (s32 i = self->mE30 - 1; i >= 0; i--) {
        __schedule_barrier(); E* e = DynamicCast<E>(static_cast<Base*>(self->arr.get(i)));
        if (e) e->m108 = 0.0f;
    }
}
