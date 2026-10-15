typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_007266A8;
extern TypeInfo data_007266AC;
extern const char ro_006F6500[];
extern int __cxa_guard_acquire(u32* g);
extern void __cxa_guard_release(u32* g);
typedef struct Obj Obj;
typedef struct ObjVt {
    int (*checkDerived)(Obj* a, const TypeInfo* ti);
} ObjVt;
struct Obj { const ObjVt* vt; };

static const TypeInfo* getTI(void)
{
    if (!(data_007266A8 & 1) && __cxa_guard_acquire(&data_007266A8)) {
        { TypeInfo* t = &data_007266AC; t->vt = ro_006F6500; }
        __cxa_guard_release(&data_007266A8);
    }
    return &data_007266AC;
}
static int isDerived(Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}
static Obj* dynCast(Obj* a) { if (isDerived(a)) return a; return 0; }
extern char* data_00706E20;
extern Obj* func_0052FBA0(void* mgr, u32 h);
typedef struct A { Obj base; u8 pad[0x8c0 - 4]; u8 m8C0; } A;
typedef struct Self { u8 pad[0x8e0]; u32 m8E0; } Self;
s32 func_0051DA04(Self* self)
{
    Obj* o = func_0052FBA0(data_00706E20 + 0x3dbbc, self->m8E0);
    if (o != 0) {
        A* a = (A*)dynCast(o);
        if (a != 0 && a->m8C0 == 1) return 1;
    }
    return 0;
}
