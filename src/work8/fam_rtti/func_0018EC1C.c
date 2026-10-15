typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_00725EDC;
extern TypeInfo data_00725EE0;
extern const char ro_006F6434[];
extern int __cxa_guard_acquire(u32* g);
extern void __cxa_guard_release(u32* g);
typedef struct Obj Obj;
typedef struct ObjVt {
    int (*checkDerived)(Obj* a, const TypeInfo* ti);
} ObjVt;
struct Obj { const ObjVt* vt; };

static const TypeInfo* getTI(void)
{
    if (!(data_00725EDC & 1) && __cxa_guard_acquire(&data_00725EDC)) {
        { TypeInfo* t = &data_00725EE0; t->vt = ro_006F6434; }
        __cxa_guard_release(&data_00725EDC);
    }
    return &data_00725EE0;
}
static int isDerived(Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}
static Obj* dynCast(Obj* a) { if (isDerived(a)) return a; return 0; }
extern char* data_00706E20;
extern Obj* func_0052FBA0(void* mgr, u32 h);
extern void func_00659688(void* p, s32 v);
typedef struct Self { u8 pad[0x49c]; u8 m49C[0x84]; u32 m520; } Self;
s32 func_0018EC1C(Self* self, u32 h)
{
    u32 cur = self->m520;
    Obj* a;
    if (h != cur) return 0;
    a = dynCast(func_0052FBA0(data_00706E20 + 0x3dbbc, h));
    if (a) {
        func_00659688(self->m49C, 7);
        return 1;
    }
    return 0;
}
