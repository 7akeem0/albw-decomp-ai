typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
struct TypeInfo { const void* vt; };
extern "C" u32 data_007268B8;
extern "C" TypeInfo data_007268BC;
extern "C" const char ro_006F6500[];
extern "C" int __cxa_guard_acquire(u32* g);
extern "C" void __cxa_guard_release(u32* g);

static const TypeInfo* getTI()
{
    if (!(data_007268B8 & 1) && __cxa_guard_acquire(&data_007268B8)) {
        { TypeInfo* t = &data_007268BC; t->vt = ro_006F6500; }
        __cxa_guard_release(&data_007268B8);
    }
    return &data_007268BC;
}
struct Obj {
    virtual bool checkDerived(const TypeInfo* ti) const;
};
static bool isDerived(const Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->checkDerived(ti);
}
struct D : Obj { u8 pad[0x30 - 4]; u16 m30; };
struct Self { bool func_0058F528(Obj& a); };
bool Self::func_0058F528(Obj& a)
{
    Obj* p = &a;
    if (!isDerived(p)) p = 0;
    D* d = static_cast<D*>(p);
    return d != 0 && d->m30 != 3;
}
