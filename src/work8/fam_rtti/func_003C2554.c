typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_007278F0;
extern TypeInfo data_007278F4;
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
    if (!(data_007278F0 & 1) && __cxa_guard_acquire(&data_007278F0)) {
        { TypeInfo* t = &data_007278F4; t->vt = ro_006F5D5C; }
        __cxa_guard_release(&data_007278F0);
    }
    return &data_007278F4;
}
static int isDerived(Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}
static Obj* dynCast(Obj* a) { if (isDerived(a)) return a; return 0; }
typedef struct BitFlag32 { u32 v; } BitFlag32;
static void bfReset(BitFlag32* f, u32 m) { f->v &= ~m; }
static void bfSet(BitFlag32* f, u32 m) { f->v |= m; }
typedef struct A { Obj base; u8 pad[0x59c - 4]; BitFlag32 m59C; } A;
typedef struct Self { u8 pad[4]; Obj* m4; u8 pad8[0x75 - 8]; u8 m75; } Self;
void func_003C2554(Self* self)
{
    A* a = (A*)dynCast(self->m4);
    if (a) {
        if (self->m75) bfSet(&a->m59C, 0x20000);
        else bfSet(&a->m59C, 0x60000);
        bfReset(&a->m59C, 0x10);
    }
}
