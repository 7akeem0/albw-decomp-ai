typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_00726820;
extern TypeInfo data_00726824;
extern const char ro_006F6278[];
extern int __cxa_guard_acquire(u32* g);
extern void __cxa_guard_release(u32* g);
typedef struct Obj Obj;
typedef struct ObjVt {
    int (*checkDerived)(Obj* a, const TypeInfo* ti);
} ObjVt;
struct Obj { const ObjVt* vt; };

static const TypeInfo* getTI(void)
{
    if (!(data_00726820 & 1) && __cxa_guard_acquire(&data_00726820)) {
        { TypeInfo* t = &data_00726824; t->vt = ro_006F6278; }
        __cxa_guard_release(&data_00726820);
    }
    return &data_00726824;
}
static int isDerived(Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}
static Obj* dynCast(Obj* a) { if (isDerived(a)) return a; return 0; }
typedef struct A { Obj base; u8 pad[0x12c - 4]; s8 m12c; } A;
typedef struct Self { u8 pad[0x48]; Obj* m48; } Self;
s32 func_0053FA50(Self* self)
{
    A* a = (A*)dynCast(self->m48);
    if (a) return a->m12c;
    return 0;
}
