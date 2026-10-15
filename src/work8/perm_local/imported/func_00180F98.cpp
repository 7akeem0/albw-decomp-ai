 
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
struct Vec3 { f32 x, y, z; void set(const Vec3& o) { x = o.x; y = o.y; z = o.z; } };
struct Actor : Base { u8 pad[0x3d0 - 4]; Vec3 m3D0; };
struct A : Actor { public: static const sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfoStatic() { static const sead::RuntimeTypeInfo::Derive<Actor> typeInfo; return &typeInfo; } static bool checkDerivedRuntimeTypeInfoStatic(const sead::RuntimeTypeInfo::Interface* typeInfo) { const sead::RuntimeTypeInfo::Interface* clsTypeInfo = A::getRuntimeTypeInfoStatic(); return clsTypeInfo == typeInfo ? true : Actor::checkDerivedRuntimeTypeInfoStatic(typeInfo); } virtual bool checkDerivedRuntimeTypeInfo(const sead::RuntimeTypeInfo::Interface* typeInfo) const { return checkDerivedRuntimeTypeInfoStatic(typeInfo); } virtual const sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfo() const { return getRuntimeTypeInfoStatic(); } };
extern "C" char* data_00706E20;
extern "C" const s32 ro_00693630;
extern "C" const s32 ro_0069362C;
extern "C" s32 func_00588BE4(Actor* a);
struct Self {
    u8 pad[0x3d0]; Vec3 m3D0; u8 pad1[0xa88 - 0x3dc]; Vec3 mA88; u8 pad2[0xbf0 - 0xa94]; s8 mBF0;
    s8 func_00180F98();
};
s8 Self::func_00180F98()
{
    char* g = data_00706E20;
    Actor** it = *(Actor***)(g + 0x3dbc0);
    Actor** end = *(Actor***)(g + 0x3dbc8);
    Actor ** end_c43 = end;
    for (; it != end_c43; it++) {
        Actor* o = *it;
        if (!o) continue;
        s32 id = func_00588BE4(o);
        s32 id_c44 = id;
        if (id_c44 != ro_00693630 && id != ro_0069362C) continue;
        A* a = DynamicCast<A>(o);
        if (!a) continue;
        f32 dy = m3D0.y - a->m3D0.y; f32 dz = m3D0.z - a->m3D0.z; f32 dx = m3D0.x - a->m3D0.x;
        if (dx * dx + dy * dy + dz * dz < 1.44f) {
            mA88.set(a->m3D0);
            mBF0 = 1;
        }
    }
    return mBF0;
}
