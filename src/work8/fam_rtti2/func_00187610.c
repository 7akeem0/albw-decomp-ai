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
typedef struct Vec3 { float x, y, z; } Vec3;
typedef struct A { Obj base; u8 pad[0x3e8 - 4]; u32 m3E8; u8 pad2[0x940 - 0x3ec]; Vec3 m940; } A;
typedef struct G24 { u32 m0; } G24;
typedef struct G { u8 pad[0x24]; G24* m24; } G;
typedef struct Self { u8 pad[0x3d0]; Vec3 m3D0; u8 pad1[0x3e8 - 0x3dc]; u32 m3E8; u8 pad2[0x4dc - 0x3ec]; u32 m4DC; u8 pad3[0x534 - 0x4e0]; Vec3 m534; } Self;
extern char* data_00706E20;
extern G* data_0070FB60;
extern Obj* func_0052FBA0(void* mgr, u32 h);
extern void func_00188F3C(Self* self);
extern void func_00542C88(A* a, Vec3* v);
extern void func_0052E32C(G* g);
extern Vec3* func_005568BC(G* g);
void func_00187610(Self* self)
{
    A* a;
    u32 v;
    Vec3* dst;
    func_00188F3C(self);
    a = (A*)dynCast(func_0052FBA0(data_00706E20 + 0x3dbbc, self->m4DC));
    dst = &self->m534;
    {
    Vec3* pos = &self->m3D0;
    if (a) {
        func_00542C88(a, pos);
        *dst = a->m940;
        v = a->m3E8;
    } else {
        func_0052E32C(data_0070FB60);
        *dst = *func_005568BC(data_0070FB60);
        v = data_0070FB60->m24->m0;
    }
    }
    self->m3E8 = v;
}
