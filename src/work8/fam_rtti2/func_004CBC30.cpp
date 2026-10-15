typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
struct TypeInfo { const void* vt; };
extern "C" u32 data_007278F0;
extern "C" TypeInfo data_007278F4;
extern "C" const char ro_006F5D5C[];
extern "C" int __cxa_guard_acquire(u32* g);
extern "C" void __cxa_guard_release(u32* g);

static const TypeInfo* getTI()
{
    if (!(data_007278F0 & 1) && __cxa_guard_acquire(&data_007278F0)) {
        { TypeInfo* t = &data_007278F4; t->vt = ro_006F5D5C; }
        __cxa_guard_release(&data_007278F0);
    }
    return &data_007278F4;
}
struct Obj {
    virtual bool checkDerived(const TypeInfo* ti) const;
};
static bool isDerived(const Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->checkDerived(ti);
}
struct X : Obj { u8 pad[0x848 - 4]; s8 m848; };
extern "C" char* data_00706E20;
extern "C" Obj* func_0052FBA0(void* mgr, u32 h);
extern "C" s32 func_00588BE4(Obj* a);
extern "C" const s32 ro_0069395C;
extern "C" const s32 ro_00693964;
extern "C" const s32 ro_006930B8;
extern "C" const s32 ro_0069390C;
extern "C" const s32 ro_006930A4;
extern "C" s32 func_004CBC30(u32 h)
{
    if (h != 0) {
        char* g = data_00706E20;
        Obj* a = func_0052FBA0(g + 0x3dbbc, h);
        if (a != 0) {
            if (func_00588BE4(a) == ro_0069395C || func_00588BE4(a) == ro_00693964 || func_00588BE4(a) == ro_006930B8 ||
                func_00588BE4(a) == ro_0069390C || func_00588BE4(a) == ro_006930A4)
                return 1;
            if (!isDerived(a)) a = 0;
            X* x = static_cast<X*>(a);
            if (x) return x->m848;
        }
    }
    return 0;
}
