typedef unsigned int u32; typedef int s32; typedef unsigned char u8; typedef signed char s8;
typedef unsigned short u16; typedef short s16; typedef float f32;
typedef struct TypeInfo { const void* parent; } TypeInfo;
typedef struct Info { char pad0[4]; u16 m4; char pad6[8]; u16 me[0x12]; } Info;
typedef struct Actor Actor;
typedef struct ActorVt { int (*checkDerived)(Actor* a, const TypeInfo* ti); } ActorVt;
struct Actor { const ActorVt* vt; char pad4[0x3a0 - 4]; Info* m3a0; };
typedef struct Msg { char pad0[0xc]; u32 mc; char pad10[8]; Info* m18; } Msg;
typedef struct Obj { char pad0[0x21]; s8 m21; char pad22[0x32 - 0x22]; u16 m32; } Obj;
extern char* data_00706E20;
extern u32 data_00725B44;
extern TypeInfo data_00725B48;
extern const char ro_006F64F4[];
extern int __cxa_guard_acquire(u32* g);
extern void __cxa_guard_release(u32* g);
extern Actor* func_0052FBA0(void* mgr, u32 h);

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

static Actor* dynCast(Actor* a) { if (isDerived(a)) return a; return 0; }

static u16* at(Info* p, s32 i)
{
    u16* q = p->me;
    if ((u32)i < 0x12) q += i;
    return q;
}

int FUN_00589dfc(Obj* self, Msg* m)
{
    Info* p = m->m18;
    if (p == 0) {
        Actor* a = func_0052FBA0(data_00706E20 + 0x3dbbc, m->mc);
        if (a == 0)
            return 1;
        a = dynCast(a);
        if (a == 0 || (p = a->m3a0) == 0)
            return 1;
    }
    m->m18 = p;
    {
        s32 i = self->m21;
        if ((u32)i < 0x13) {
            if ((u8)*at(p, i) == 0)
                return 0;
        }
    }
    if (self->m32 & (1 << p->m4))
        return 1;
    return 0;
}
