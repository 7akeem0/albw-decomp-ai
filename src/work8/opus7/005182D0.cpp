typedef unsigned char u8; typedef unsigned int u32; typedef int s32;

struct TypeInfo { const void* vt; };
extern "C" u32 data_007260A4;
extern "C" TypeInfo data_007260A8;
extern "C" const char ro_006F5D5C[];
extern "C" int __cxa_guard_acquire(u32* g);
extern "C" void __cxa_guard_release(u32* g);

struct Actor { virtual bool checkDerived(const TypeInfo* ti); };

static const TypeInfo* getTI()
{
    if (!(data_007260A4 & 1) && __cxa_guard_acquire(&data_007260A4)) {
        { TypeInfo* t = &data_007260A8; t->vt = ro_006F5D5C; }
        __cxa_guard_release(&data_007260A4);
    }
    return &data_007260A8;
}
static int isDerived(Actor* a)
{
    const TypeInfo* ti = getTI();
    return a && a->checkDerived(ti);
}
static Actor* dynCast(Actor* a) { if (isDerived(a)) return a; return 0; }

struct SpawnParam {
    u32 m0; u8 pad4[0x18]; u32 m1c, m20, m24; u8 pad28[0x20]; u32 m48, m4c; u8 pad50[0x2c0 - 0x50]; u32 m2c0;
    SpawnParam() { m20 = 0; m24 = 0; m1c = 0; m48 = 0; m4c = 0; m2c0 = 0; reset(); }
    void reset();
};
extern "C" const u32 ro_006930E0;
extern "C" void* data_00706E20;
u32 func_0019B04C(u32);
Actor* func_004C4AF4(void*, SpawnParam*, s32);

struct Self {
    u8 pad[0x14]; Actor* m14;
    void spawn();
};
void Self::spawn()
{
    SpawnParam p;
    p.m0 = func_0019B04C(ro_006930E0);
    Actor* a = func_004C4AF4(data_00706E20, &p, 0);
    m14 = dynCast(a);
}
