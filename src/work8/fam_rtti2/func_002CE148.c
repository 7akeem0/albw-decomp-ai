typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_007279A8;
extern TypeInfo data_007279AC;
extern const char ro_006F6008[];
extern int __cxa_guard_acquire(u32* g);
extern void __cxa_guard_release(u32* g);
typedef struct Obj Obj;
typedef struct ObjVt {
    int (*checkDerived)(Obj* a, const TypeInfo* ti);
} ObjVt;
struct Obj { const ObjVt* vt; };

static const TypeInfo* getTI(void)
{
    if (!(data_007279A8 & 1) && __cxa_guard_acquire(&data_007279A8)) {
        { TypeInfo* t = &data_007279AC; t->vt = ro_006F6008; }
        __cxa_guard_release(&data_007279A8);
    }
    return &data_007279AC;
}
static int isDerived(Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}
static Obj* dynCast(Obj* a) { if (isDerived(a)) return a; return 0; }
typedef struct E30 { u8 pad[0x30]; } E30;
typedef struct T24 { u8 pad[0x14]; E30* m14; } T24;
typedef struct T7A0 { u8 pad[0x24]; T24* m24; } T7A0;
typedef struct A { Obj base; u8 pad[0x7a0 - 4]; T7A0* m7A0; u8 pad2[0xa06 - 0x7a4]; s16 mA06; } A;
typedef struct X { u8 pad[0x80]; u8 m80[0x164 - 0x80]; u32 m164; } X;
typedef struct Self { u8 pad[0x2d7]; u8 m2D7; u8 pad2[0x430 - 0x2d8]; X* m430; void* m434; u8 pad3[0x478 - 0x438]; u32 m478; } Self;
extern char* data_00706E20;
extern Obj* func_0052FBA0(void* mgr, u32 h);
extern void func_00169A80(void* p);
extern void func_00168E9C(void* p, X* x, int z);
extern void func_001151EC(void* p, E30* e);
extern void func_004CEAF0(X* x);
void func_002CE148(Self* self)
{
    A* a = (A*)dynCast(func_0052FBA0(data_00706E20 + 0x3dbbc, self->m478));
    void** p434;
    X** p430;
    X* x;
    if (!a) {
        self->m2D7 = 1;
        return;
    }
    p434 = &self->m434;
    func_00169A80(*p434);
    p430 = &self->m430;
    {
        X* t = *p430;
        func_00168E9C(*p434, t, 0);
    }
    x = *p430;
    x->m164 |= 0x40000000;
    func_001151EC(x->m80, &a->m7A0->m24->m14[a->mA06]);
    func_004CEAF0(*p430);
}
