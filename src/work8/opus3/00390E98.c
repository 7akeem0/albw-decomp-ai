typedef unsigned int u32; typedef int s32; typedef unsigned char u8; typedef signed char s8;
typedef unsigned short u16; typedef short s16; typedef float f32;
typedef struct Vec3 { f32 x, y, z; } Vec3;
typedef struct TypeInfo { const void* parent; } TypeInfo;
typedef struct Actor Actor;
typedef struct ActorVt { int (*checkDerived)(Actor* a, const TypeInfo* ti); } ActorVt;
struct Actor { const ActorVt* vt; char pad4[0x3d0 - 4]; Vec3 m3d0; };
typedef struct Obj {
    char pad0[0x41d]; u8 m41d; char pad41e[0x444 - 0x41e]; Vec3 m444; char pad450[0x4b4 - 0x450];
    s32 m4b4; char pad4b8[0x4cc - 0x4b8]; s32 m4cc; char pad4d0[0x4dc - 0x4d0]; u32 m4dc;
} Obj;
extern char* data_00706E20;
extern void* data_0070FB60;
extern u32 data_00725B44;
extern TypeInfo data_00725B48;
extern const char ro_006F64F4[];
extern int __cxa_guard_acquire(u32* g);
extern void __cxa_guard_release(u32* g);
extern Actor* func_0052FBA0(void* mgr, u32 h);
extern void func_00361784(void* p, s32 v);

static const TypeInfo* getTI(void)
{
    if (!(data_00725B44 & 1) && __cxa_guard_acquire(&data_00725B44)) {
        { TypeInfo* t = &data_00725B48; t->parent = ro_006F64F4; }
        __cxa_guard_release(&data_00725B44);
    }
    return &data_00725B48;
}

static int isDerived(Actor* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}

void FUN_00390e98(Obj* o)
{
    Actor* a;
    o->m4cc = 0x28;
    o->m41d = 0;
    a = func_0052FBA0(data_00706E20 + 0x3dbbc, o->m4dc);
    if (!isDerived(a)) a = 0;
    o->m444.x = a->m3d0.x;
    o->m444.y = a->m3d0.y;
    o->m444.z = a->m3d0.z;
    func_00361784(data_0070FB60, 1);
    o->m4b4 = 0;
}
