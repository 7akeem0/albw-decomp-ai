typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_007278F0;
extern TypeInfo data_007278F4;
extern const char ro_006F5D5C[];
extern int __cxa_guard_acquire(u32* g);
extern void __cxa_guard_release(u32* g);

typedef struct Actor Actor;
typedef struct ActorVt { int (*checkDerived)(Actor* a, const TypeInfo* ti); } ActorVt;
struct Actor { const ActorVt* vt; };
extern char* data_00706E20;
extern Actor* func_0052FBA0(void* mgr, u32 h);
extern void func_004F9408(Actor* e, void* v);
typedef struct Part { u8 pad[4]; u32 m4; } Part;
extern int func_0034C8F0(Part* p, s32 a, void* m);
extern void func_0023D2BC(void* self, s32 v);

typedef struct Self {
    u8 pad0[0x3a0];
    s32 m3A0;
    u8 pad3a4[0x3d0 - 0x3a4];
    u8 m3D0[0xc];
    u8 pad3dc[0x480 - 0x3dc];
    Part* m480;
} Self;

static const TypeInfo* getTI(void)
{
    if (!(data_007278F0 & 1) && __cxa_guard_acquire(&data_007278F0)) {
        { TypeInfo* t = &data_007278F4; t->vt = ro_006F5D5C; }
        __cxa_guard_release(&data_007278F0);
    }
    return &data_007278F4;
}

static int isDerived(Actor* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}

static Actor* dynCast(Actor* a) { if (isDerived(a)) return a; return 0; }

s32 FUN_0023d6bc(Self* self, void* m)
{
    Actor* a;
    char* mgr;
    func_0034C8F0(self->m480, self->m3A0, m);
    mgr = data_00706E20;
    a = func_0052FBA0(mgr + 0x3dbbc, self->m480->m4);
    if (a != 0) {
        a = dynCast(a);
        if (a != 0) {
            func_0023D2BC(self, 1);
            func_004F9408(a, self->m3D0);
        }
    }
    return 0;
}

