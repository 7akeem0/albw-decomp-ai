typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_00727028;
extern TypeInfo data_0072702C;
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
    if (!(data_00727028 & 1) && __cxa_guard_acquire(&data_00727028)) {
        { TypeInfo* t = &data_0072702C; t->vt = ro_006F5D5C; }
        __cxa_guard_release(&data_00727028);
    }
    return &data_0072702C;
}
static int isDerived(Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}
static Obj* dynCast(Obj* a) { if (isDerived(a)) return a; return 0; }
typedef struct B { u8 pad[0xc]; u32 mC; } B;
typedef struct Mgr { u8 pad[0x3dbbc]; u8 m3DBBC[0x2c]; B* m3DBE8; } Mgr;
extern Mgr* data_00706E20;
extern Obj* func_0052FBA0(void* mgr, u32 h);
typedef struct A { Obj base; u8 pad[0x44c - 4]; s32 m44C; u32 m450; s32 m454; s32 m458; } A;
s32 func_003ADD04(void)
{
    Mgr* g = data_00706E20;
    if (g != 0) {
        A* a = (A*)dynCast(func_0052FBA0(g->m3DBBC, g->m3DBE8->mC));
        if (a) {
            return a->m44C == 0 && (a->m458 == 0 || a->m450 >= 300);
        }
    }
    return 1;
}
