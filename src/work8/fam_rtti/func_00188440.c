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
extern void func_004CF478(void* p, s32 a, s32 b);
extern void func_00151148(void* q, s32 a);
extern void* data_00711F50;
extern void func_004EAF08(void* p, s32 a);
typedef struct G1C { u8 pad[4]; u32 m4; } G1C;
typedef struct G { u8 pad[0x1c]; G1C* m1C; } G;
extern G* data_0070FB60;
typedef struct A { Obj base; u8 pad[0x3d4 - 4]; u32 m3D4; } A;
typedef struct Self {
    u8 pad[0x4dc]; u32 m4DC; u8 pad4e0[0x4f4 - 0x4e0]; void* m4F4; u8 pad4f8[0x52c - 0x4f8]; void* m52C;
    u8 pad530[0x564 - 0x530]; u32 m564; u8 pad568[0x67d - 0x568]; u8 m67D; u8 pad67e[0x702 - 0x67e]; u8 m702;
} Self;
typedef struct S400 { u8 pad[0x164]; u32 m164; } S400;
void func_00188440(Self* self)
{
    A* a;
    u8 z;
    S400* dst;
    func_004CF478(self->m4F4, 1, 0);
    func_00151148(self->m52C, 1);
    z = 0;
    self->m67D = z;
    func_004EAF08(data_00711F50, 1);
    dst = (S400*)((u8*)self + 0x400);
    a = (A*)dynCast(func_0052FBA0(data_00706E20 + 0x3dbbc, self->m4DC));
    dst->m164 = a ? a->m3D4 : data_0070FB60->m1C->m4;
    self->m702 = z;
}
