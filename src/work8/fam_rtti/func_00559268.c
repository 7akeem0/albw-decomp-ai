typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_007260DC;
extern TypeInfo data_007260E0;
extern const char ro_006F6314[];
extern int __cxa_guard_acquire(u32* g);
extern void __cxa_guard_release(u32* g);
typedef struct Obj Obj;
typedef struct ObjVt {
    int (*checkDerived)(Obj* a, const TypeInfo* ti);
} ObjVt;
struct Obj { const ObjVt* vt; };

static const TypeInfo* getTI(void)
{
    if (!(data_007260DC & 1) && __cxa_guard_acquire(&data_007260DC)) {
        { TypeInfo* t = &data_007260E0; t->vt = ro_006F6314; }
        __cxa_guard_release(&data_007260DC);
    }
    return &data_007260E0;
}
static int isDerived(Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}
static Obj* dynCast(Obj* a) { if (isDerived(a)) return a; return 0; }
extern char* data_00706E20;
extern Obj* func_0052FBA0(void* mgr, u32 h);
typedef struct A { Obj base; u8 pad[0x2cc - 4]; u32 m2CC; } A;
typedef struct Self { u8 pad[0x74]; u32 m74; } Self;
u32 func_00559268(Self* self)
{
    A* a = (A*)dynCast(func_0052FBA0(data_00706E20 + 0x3dbbc, self->m74));
    if (a) return a->m2CC;
    return 0;
}
