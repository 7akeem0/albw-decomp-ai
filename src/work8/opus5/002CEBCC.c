typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_007279A8;
extern TypeInfo data_007279AC;
extern const char ro_006F6008[];
extern int __cxa_guard_acquire(u32* g);
extern void __cxa_guard_release(u32* g);

typedef struct Actor Actor;
typedef struct ActorVt { int (*checkDerived)(Actor* a, const TypeInfo* ti); } ActorVt;
struct Actor { const ActorVt* vt; };
extern char* data_00706E20;
extern Actor* func_0052FBA0(void* mgr, u32 h);

typedef struct Req5C { u8 data[0x5c]; } Req5C;
extern Req5C* func_002C11E8(Req5C* r, u16 id, u32 arg, int b);
extern void func_0016898C(void* p, const Req5C* r);

typedef struct Self {
    u8 pad0[0x434];
    void* m434;
    u8 pad438[0x478 - 0x438];
    u32 m478;
    u8 pad47c[0x4a1 - 0x47c];
    u8 m4A1;
} Self;

static const TypeInfo* getTI(void)
{
    if (!(data_007279A8 & 1) && __cxa_guard_acquire(&data_007279A8)) {
        { TypeInfo* t = &data_007279AC; t->vt = ro_006F6008; }
        __cxa_guard_release(&data_007279A8);
    }
    return &data_007279AC;
}

static int isDerived(Actor* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}

static Actor* dynCast(Actor* a) { if (isDerived(a)) return a; return 0; }

void FUN_002cebcc(Self* self)
{
    Actor* a;
    self->m4A1 = 0;
    a = dynCast(func_0052FBA0(data_00706E20 + 0x3dbbc, self->m478));
    if (a != 0) {
        Req5C r;
        func_0016898C(self->m434, func_002C11E8(&r, 2, 0x3c, 0));
    }
}
