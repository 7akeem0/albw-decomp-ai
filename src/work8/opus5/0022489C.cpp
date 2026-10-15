typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

struct TypeInfo { const void* vt; };
extern "C" u32 data_007279C8;
extern "C" TypeInfo data_007279CC;
extern "C" const char ro_006F5D5C[];
extern "C" int __cxa_guard_acquire(u32* g);
extern "C" void __cxa_guard_release(u32* g);

struct Actor {
    virtual bool checkDerived(const TypeInfo* ti);
    u8 pad4[0x2d7 - 4];
    u8 m2D7;
};
extern "C" char data_00706E20[];
Actor* func_0052FBA0(void* mgr, u32 h);
struct Enemy : Actor { };
void func_0051228C(Enemy* a, s32 v);

struct Kind { u8 m0; u8 m1; };
struct Msg { u8 pad[0x28]; u32 m28; Kind* m2C; };
struct Part;
bool func_0034C8F0(Part* p, s32 a, Msg* m);
void func_004FA8A0(Msg* m);

static const TypeInfo* getTI()
{
    if (!(data_007279C8 & 1) && __cxa_guard_acquire(&data_007279C8)) {
        { TypeInfo* t = &data_007279CC; t->vt = ro_006F5D5C; }
        __cxa_guard_release(&data_007279C8);
    }
    return &data_007279CC;
}

static int isDerived(Actor* a)
{
    const TypeInfo* ti = getTI();
    return a && a->checkDerived(ti);
}
static Actor* dynCast(Actor* a) { if (isDerived(a)) return a; return 0; }

static inline Actor* findActor(u32 h) { return func_0052FBA0(*(char**)data_00706E20 + 0x3dbbc, h); }

static inline bool isKind(Msg* m, u8 k) { return m->m2C != 0 && m->m2C->m1 == k; }
struct Self {
    u8 pad0[0x3a0];
    s32 m3A0;
    u8 pad3a4[0x434 - 0x3a4];
    Part* m434;
    s32 onMsg(Msg* m);
};

s32 Self::onMsg(Msg* m)
{
    if (func_0034C8F0(m434, m3A0, m)) {
        func_004FA8A0(m);
        if (isKind(m, 7)) {
            Actor* a = findActor(m->m28);
            if (a != 0) a->m2D7 = 1;
        }
        if (isKind(m, 2)) {
            Actor* a = findActor(m->m28);
            if (a != 0) {
                if (!isDerived(a)) a = 0;
                Enemy* e = static_cast<Enemy*>(a);
                if (e != 0) func_0051228C(e, 1);
            }
        }
    }
    return 0;
}





