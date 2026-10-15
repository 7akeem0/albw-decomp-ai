typedef unsigned int u32; typedef int s32; typedef unsigned char u8; typedef signed char s8;
typedef unsigned short u16; typedef short s16; typedef float f32;
typedef struct TypeInfo { const void* parent; } TypeInfo;
typedef struct Actor Actor;
typedef struct ActorVt { int (*checkDerived)(Actor* a, const TypeInfo* ti); } ActorVt;
struct Actor { const ActorVt* vt; char pad4[0x698 - 4]; s32 m698; s32 m69c; };
typedef struct Obj Obj;
typedef struct ObjVt { char pad[0x134]; int (*f134)(Obj* o); void (*f138)(Obj* o, s32 a, s32 b); } ObjVt;
struct Obj { const ObjVt* vt; char pad4[0x48 - 4]; void* m48; char pad4c[0x90 - 0x4c]; u32 m90; };
extern char* data_00706E20;
extern u32 data_00727898;
extern TypeInfo data_0072789C;
extern const char ro_006F6020[];
extern int __cxa_guard_acquire(u32* g);
extern void __cxa_guard_release(u32* g);
extern Actor* func_0052FBA0(void* mgr, u32 h);
extern void func_002B705C(void* p);

static const TypeInfo* getTI(void)
{
    if (!(data_00727898 & 1) && __cxa_guard_acquire(&data_00727898)) {
        { TypeInfo* t = &data_0072789C; t->parent = ro_006F6020; }
        __cxa_guard_release(&data_00727898);
    }
    return &data_0072789C;
}

static int isDerived(Actor* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}

static Actor* dynCast(Actor* a) { if (isDerived(a)) return a; return 0; }

void FUN_003b22a0(Obj* o)
{
    Actor* a;
    func_002B705C(o->m48);
    a = func_0052FBA0(data_00706E20 + 0x3dbbc, o->m90);
    a = dynCast(a);
    if ((a == 0 || a->m69c - a->m698 > 30) && !o->vt->f134(o))
        return;
    o->vt->f138(o, 5, 1);
}
