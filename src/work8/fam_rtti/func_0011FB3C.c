typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_00726C78;
extern TypeInfo data_00726C7C;
extern const char ro_006F5D5C[];
extern int __cxa_guard_acquire(u32* g);
extern void __cxa_guard_release(u32* g);
typedef struct Obj Obj;
typedef struct ObjVt {
    int (*checkDerived)(Obj* a, const TypeInfo* ti);
} ObjVt;
struct Obj { const ObjVt* vt; };

static const TypeInfo* getTI(void)
{
    if (!(data_00726C78 & 1) && __cxa_guard_acquire(&data_00726C78)) {
        { TypeInfo* t = &data_00726C7C; t->vt = ro_006F5D5C; }
        __cxa_guard_release(&data_00726C78);
    }
    return &data_00726C7C;
}
static int isDerived(Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}
static Obj* dynCast(Obj* a) { if (isDerived(a)) return a; return 0; }
typedef struct A { Obj base; u8 pad[0x40c - 4]; u8 m40C[4]; u8 m410; } A;
extern __attribute__((weak)) void func_006666E4(void* p, s32 v);
void func_0011FB3C(Obj* o)
{
    A* a = (A*)dynCast(o);
    if (a) {
        if (a->m410 == 0) func_006666E4(a->m40C, 1);
    }
}
