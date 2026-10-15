
typedef unsigned int u32;
typedef int s32;
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


struct RActor {
    public: static const sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfoStatic() { static const sead::RuntimeTypeInfo::Root typeInfo; return &typeInfo; } static bool checkDerivedRuntimeTypeInfoStatic(const sead::RuntimeTypeInfo::Interface* typeInfo) { const sead::RuntimeTypeInfo::Interface* clsTypeInfo = RActor::getRuntimeTypeInfoStatic(); return clsTypeInfo == typeInfo; } virtual bool checkDerivedRuntimeTypeInfo(const sead::RuntimeTypeInfo::Interface* typeInfo) const { return checkDerivedRuntimeTypeInfoStatic(typeInfo); } virtual const sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfo() const { return getRuntimeTypeInfoStatic(); }
};
struct Tgt : public RActor { public: static const sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfoStatic() { static const sead::RuntimeTypeInfo::Derive<RActor> typeInfo; return &typeInfo; } static bool checkDerivedRuntimeTypeInfoStatic(const sead::RuntimeTypeInfo::Interface* typeInfo) { const sead::RuntimeTypeInfo::Interface* clsTypeInfo = Tgt::getRuntimeTypeInfoStatic(); return clsTypeInfo == typeInfo ? true : RActor::checkDerivedRuntimeTypeInfoStatic(typeInfo); } virtual bool checkDerivedRuntimeTypeInfo(const sead::RuntimeTypeInfo::Interface* typeInfo) const { return checkDerivedRuntimeTypeInfoStatic(typeInfo); } virtual const sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfo() const { return getRuntimeTypeInfoStatic(); } };
template <typename T> inline bool IsDerivedFrom(const RActor* o) {
    const sead::RuntimeTypeInfo::Interface* ti = T::getRuntimeTypeInfoStatic();
    return o && o->checkDerivedRuntimeTypeInfo(ti);
}
template <typename T> inline T* DynamicCast(RActor* o) {
    if (!IsDerivedFrom<T>(o)) o = 0;
    return static_cast<T*>(o);
}
struct ActorMgr;
struct Game { char pad[0x3dbbc]; ActorMgr* actors() { return (ActorMgr*)this; } };
extern Game* data_00706E20;
RActor* func_0052FBA0(ActorMgr* mgr, u32 h);
static RActor* ctx_0020B768_0(ActorMgr* a0,u32 a1){ActorMgr* copy0=a0;a0=copy0;u32 copy1=a1;a1=copy1;return func_0052FBA0(a0,a1);}

s32 func_00588BE4(RActor* a);   
extern const s32 ro_006933D0;
void func_00509F0C(Tgt* t);
bool f(u32 h) {
    Game* g = data_00706E20; 
    RActor* a = ctx_0020B768_0((ActorMgr*)((char*)g + 0x3dbbc), h);
    if (a && func_00588BE4(a) == ro_006933D0) {
        Tgt* t = DynamicCast<Tgt>(a);
        if (t) {
            func_00509F0C(t);
            return true;
        }
    }
    return false;
}
