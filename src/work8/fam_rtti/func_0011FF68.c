typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_00725B8C;
extern TypeInfo data_00725B90;
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
    if (!(data_00725B8C & 1) && __cxa_guard_acquire(&data_00725B8C)) {
        { TypeInfo* t = &data_00725B90; t->vt = ro_006F6500; }
        __cxa_guard_release(&data_00725B8C);
    }
    return &data_00725B90;
}
static int isDerived(Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}
static Obj* dynCast(Obj* a) { if (isDerived(a)) return a; return 0; }
typedef struct A { Obj base; u8 pad[0x2e - 4]; u16 m2E; } A;
typedef struct G { u8 pad[0xc]; A* mC; } G;
extern G data_0070ACF8;
static s32 kindIdx(const A* a)
{
    u8 t = (u8)a->m2E;
    if (t < 4) {
        if (t >= 2) return t - 2;
    }
    return -1;
}
static int hasIdx(const A* a) { return kindIdx(a) >= 0; }
void func_0011FF68(Obj* o)
{
    A* a;
    if (data_0070ACF8.mC != 0) return;
    a = (A*)dynCast(o);
    if (a) {
        if (!hasIdx(a)) data_0070ACF8.mC = a;
    }
}
