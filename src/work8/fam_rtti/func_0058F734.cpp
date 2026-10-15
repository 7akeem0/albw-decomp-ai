typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
struct TypeInfo { const void* vt; };
extern "C" u32 data_00726BC0;
extern "C" TypeInfo data_00726BC4;
extern "C" const char ro_006F5D5C[];
extern "C" int __cxa_guard_acquire(u32* g);
extern "C" void __cxa_guard_release(u32* g);

static const TypeInfo* getTI()
{
    if (!(data_00726BC0 & 1) && __cxa_guard_acquire(&data_00726BC0)) {
        { TypeInfo* t = &data_00726BC4; t->vt = ro_006F5D5C; }
        __cxa_guard_release(&data_00726BC0);
    }
    return &data_00726BC4;
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
extern "C" s32 func_00588BE4(Obj* a);
extern "C" const s32 ro_0069329C;
extern "C" float func_00552C88(D* d);
struct Self { u8 pad[4]; u8 m4; bool func_0058F734(Obj& a); };
bool Self::func_0058F734(Obj& a)
{
    if (func_00588BE4(&a) != ro_0069329C) return false;
    Obj* p = &a;
    if (!isDerived(p)) p = 0;
    D* d = static_cast<D*>(p);
    if (d) {
        float v = func_00552C88(d);
        if ((v > 0.0f && m4 == 1) || (v <= 0.0f && m4 == 0)) return true;
    }
    return false;
}
