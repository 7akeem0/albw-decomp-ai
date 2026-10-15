typedef unsigned int u32;
struct TypeInfo { const void* vt; };
extern "C" u32 data_007260EC;
extern "C" TypeInfo data_007260F0;
extern "C" const char ro_006F60D4[];
extern "C" int __cxa_guard_acquire(u32* g);
extern "C" void __cxa_guard_release(u32* g);
struct Obj { virtual bool checkDerived(const TypeInfo* ti) const; };
struct D : Obj {};

static const TypeInfo* getTI()
{
    if (!(data_007260EC & 1) && __cxa_guard_acquire(&data_007260EC)) {
        { TypeInfo* t = &data_007260F0; t->vt = ro_006F60D4; }
        __cxa_guard_release(&data_007260EC);
    }
    return &data_007260F0;
}
static bool isDerived(const Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->checkDerived(ti);
}
struct Self { bool func_0058F440(Obj& a); };
bool Self::func_0058F440(Obj& a)
{
    Obj* p = &a;
    if (!isDerived(p)) p = 0;
    D* d = static_cast<D*>(p);
    return d != 0;
}
