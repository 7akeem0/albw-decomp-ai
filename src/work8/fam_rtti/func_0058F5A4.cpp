typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
struct TypeInfo { const void* vt; };
extern "C" u32 data_00725B8C;
extern "C" TypeInfo data_00725B90;
extern "C" const char ro_006F6500[];
extern "C" int __cxa_guard_acquire(u32* g);
extern "C" void __cxa_guard_release(u32* g);

static const TypeInfo* getTI()
{
    if (!(data_00725B8C & 1) && __cxa_guard_acquire(&data_00725B8C)) {
        { TypeInfo* t = &data_00725B90; t->vt = ro_006F6500; }
        __cxa_guard_release(&data_00725B8C);
    }
    return &data_00725B90;
}
struct Obj {
    virtual bool checkDerived(const TypeInfo* ti) const;
};
static bool isDerived(const Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->checkDerived(ti);
}
struct D : Obj { u8 pad[0x2e - 4]; u16 m2E; };
static s32 kindIdx(const D* a)
{
    u8 t = (u8)a->m2E;
    if (t < 4) {
        if (t >= 2) return t - 2;
    }
    return -1;
}
struct Self { u8 pad[4]; s32 m4; bool func_0058F5A4(Obj& a); };
bool Self::func_0058F5A4(Obj& a)
{
    Obj* p = &a;
    if (!isDerived(p)) p = 0;
    D* d = static_cast<D*>(p);
    if (d && kindIdx(d) == m4) return true;
    return false;
}
