typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
struct TypeInfo { const void* vt; };
extern "C" u32 data_007269F8;
extern "C" TypeInfo data_007269FC;
extern "C" const char ro_006F5D5C[];
extern "C" int __cxa_guard_acquire(u32* g);
extern "C" void __cxa_guard_release(u32* g);

static const TypeInfo* getTI()
{
    if (!(data_007269F8 & 1) && __cxa_guard_acquire(&data_007269F8)) {
        { TypeInfo* t = &data_007269FC; t->vt = ro_006F5D5C; }
        __cxa_guard_release(&data_007269F8);
    }
    return &data_007269FC;
}
struct Obj {
    virtual bool checkDerived(const TypeInfo* ti) const;
};
static bool isDerived(const Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->checkDerived(ti);
}
struct D : Obj {};
struct Self { bool func_0058F6C0(Obj& a); };
bool Self::func_0058F6C0(Obj& a)
{
    Obj* p = &a;
    if (!isDerived(p)) p = 0;
    D* d = static_cast<D*>(p);
    return d != 0;
}
