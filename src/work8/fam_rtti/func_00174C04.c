typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_00725F34;
extern TypeInfo data_00725F38;
extern const char ro_006F60BC[];
extern int __cxa_guard_acquire(u32* g);
extern void __cxa_guard_release(u32* g);
typedef struct Obj Obj;
typedef struct ObjVt {
    int (*checkDerived)(Obj* a, const TypeInfo* ti);
} ObjVt;
struct Obj { const ObjVt* vt; };

static const TypeInfo* getTI(void)
{
    if (!(data_00725F34 & 1) && __cxa_guard_acquire(&data_00725F34)) {
        { TypeInfo* t = &data_00725F38; t->vt = ro_006F60BC; }
        __cxa_guard_release(&data_00725F34);
    }
    return &data_00725F38;
}
static int isDerived(Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}
static Obj* dynCast(Obj* a) { if (isDerived(a)) return a; return 0; }
extern char* data_00706E20;
extern Obj* func_0052FBA0(void* mgr, u32 h);
typedef struct E { u8 m0; u8 pad[27]; } E;
typedef struct A { Obj base; u8 pad[0x61c - 4]; u32 m61C; E* m620; } A;
static E* at(A* a, u32 i) { if (a->m61C < i) i = a->m61C; return &a->m620[i]; }
typedef struct Self { u8 pad[0x2c]; s16 m2C; u8 pad2e[0x50 - 0x2e]; u32 m50; u8 pad54[0x2d7 - 0x54]; u8 m2D7; } Self;
s32 func_00174C04(Self* self)
{
    Obj* o = func_0052FBA0(data_00706E20 + 0x3dbbc, self->m50);
    if (o != 0) {
        A* a = (A*)dynCast(o);
        if (a != 0) {
            E* e = at(a, self->m2C);
            e->m0 = 0;
        }
    }
    self->m2D7 = 1;
    return 1;
}
