typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_007266C0;
extern TypeInfo data_007266C4;
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
    if (!(data_007266C0 & 1) && __cxa_guard_acquire(&data_007266C0)) {
        { TypeInfo* t = &data_007266C4; t->vt = ro_006F6500; }
        __cxa_guard_release(&data_007266C0);
    }
    return &data_007266C4;
}
static int isDerived(Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}
static Obj* dynCast(Obj* a) { if (isDerived(a)) return a; return 0; }
extern char* data_00706E20;
extern Obj* func_0052FBA0(void* mgr, u32 h);
extern void* data_0070FB60;
extern u32 func_00556A90(void* p);
typedef struct A { Obj base; u8 pad[0x7a4 - 4]; u32 m7A4; } A;
typedef struct S400 { u8 pad[0x8e]; u8 m8E; u8 m8F; u8 pad90[5]; u8 m95; u8 pad96[7]; u8 m9D; u8 m9E; } S400;
typedef struct Self { u8 pad[0x2cc]; u32 m2CC; u8 pad2d0[0x4a0 - 0x2d0]; u32 m4A0; } Self;
extern void func_0024FED0(Self* self);
void func_002507E0(Self* self)
{
    S400* q = (S400*)((u8*)self + 0x400);
    u32 v;
    if (q->m9D == 0 && q->m9E == 0) return;
    if (q->m8E == 0 && q->m8F == 0) return;
    v = 0;
    if (q->m95) {
        v = func_00556A90(data_0070FB60);
    } else {
        A* a = (A*)dynCast(func_0052FBA0(data_00706E20 + 0x3dbbc, self->m4A0));
        if (a) v = a->m7A4;
    }
    {
        u32 cur = self->m2CC;
        if (v != cur) return;
    }
    func_0024FED0(self);
}
