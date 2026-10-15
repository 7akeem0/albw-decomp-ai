typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_00726838;
extern TypeInfo data_0072683C;
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
    if (!(data_00726838 & 1) && __cxa_guard_acquire(&data_00726838)) {
        { TypeInfo* t = &data_0072683C; t->vt = ro_006F6278; }
        __cxa_guard_release(&data_00726838);
    }
    return &data_0072683C;
}
static int isDerived(Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}
static Obj* dynCast(Obj* a) { if (isDerived(a)) return a; return 0; }
typedef struct Vec3 { float x, y, z; } Vec3;
typedef struct A { Obj base; u8 pad[0x84 - 4]; Vec3 m84; } A;
typedef struct Self { u8 pad[0x48]; Obj* m48; } Self;
void func_0053F534(Self* self, Vec3* out)
{
    A* a;
    out->x = 0.0f; out->y = 0.0f; out->z = 0.0f;
    a = (A*)dynCast(self->m48);
    if (a) { out->x = a->m84.x; out->y = a->m84.y; out->z = a->m84.z; }
}
