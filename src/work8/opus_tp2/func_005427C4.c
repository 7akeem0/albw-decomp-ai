typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_00725A04;
extern TypeInfo data_00725A08;
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
    if (!(data_00725A04 & 1) && __cxa_guard_acquire(&data_00725A04)) {
        { TypeInfo* t = &data_00725A08; t->vt = ro_006F6500; }
        __cxa_guard_release(&data_00725A04);
    }
    return &data_00725A08;
}
static int isDerived(Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}
extern char* data_00706E20;
extern Obj* func_0052FBA0(void* mgr, u32 h);
typedef struct A { Obj base; u8 pad[0x8c0 - 4]; u8 m8C0; } A;
typedef struct Self { u8 pad[0x50]; u32 m8E0; } Self;
extern s32 func_0051D960(A* a, u32 arg);
static Obj* dynCast(Obj* a) { return isDerived(a) ? a : 0; }
s32 func_005427C4(Self* self, u32 arg)
{
    Obj* o = func_0052FBA0(data_00706E20 + 0x3dbbc, self->m8E0);
    if (o != 0) {
        A* a = (A*)dynCast(o);
        if (a != 0) return func_0051D960(a, arg);
    }
    return 0;
}
