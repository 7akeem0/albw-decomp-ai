typedef unsigned char u8; typedef unsigned int u32; typedef int s32; typedef float f32;

struct EffOwner { char pad[4]; s32 m4; char pad8[4]; u32 mc; char pad10[0x280 - 0x10]; u8 m280; };
struct Eff {
    char pad[0x1c]; u32 m1c; EffOwner* m20; u32 m24; char pad28[0x3c - 0x28]; u32 m3c;
    bool isPlaying() const {
        if (m3c & 4) return true;
        if (m3c & 0x40) return true;
        EffOwner* o = m20;
        if (o && m24 == o->mc && o->m4 > 0) return true;
        return false;
    }
};
struct EffHandle { Eff* p; u32 id; };
struct EffRet : public EffHandle { u32 x; };
struct Anim344;
EffRet func_004A1B9C(Anim344* a, const char* name);
void func_00110848(Eff* e);
inline bool isValid(const EffHandle& h) { return h.p && h.p->m1c == h.id; }
inline bool isValidQ(const EffHandle* h) { if (h->p == 0) return false; const u32& id = h->id; return h->p->m1c == id; }

struct AnimElem { char pad[0x10]; f32 m10; };
struct AnimArr {
    char pad[0xc]; s32 mNum; s32 mMax; AnimElem* mData;
    AnimElem& operator[](s32 i) { if ((u32)i < (u32)mNum) return mData[i]; return mData[0]; }
};
struct Ctx { char pad[0x24]; u8 m24; u8 m25; char pad26[4]; u8 m2a; };
inline bool isMode(const Ctx* c) { return c->m24 == 2 || c->m25 == 3; }

extern "C" u32 ro_00693840;
struct Actor;
u32 func_002B200C(u32);
void func_004FABDC(Actor*, u32, u32, u32);
void func_004FAB60(Actor*, u32, u32);
u32 func_00588BE4(Actor*);
s32 func_0058A1F4(Actor*);
void func_0058AC14(Actor*);
void func_004FB070(Actor*);
void func_004F32A4(Actor*, u32);

inline void stopEff(EffHandle* h, s32 v) {
    if (isValidQ(h)) {
        Eff* e = h->p;
        EffOwner* o = e->m20;
        if (o && e->m24 == o->mc && o->m4 > 0) o->m280 = v;
        u32 f = e->m3c; f &= ~4u; f |= 8u; e->m3c = f;
    }
}

struct Actor {
    char pad0[0x344];
    Anim344* m344;
    char pad348[0x4f0 - 0x348];
    f32 m4f0;
    char pad4f4[0x8bc - 0x4f4];
    AnimArr* m8bc;
    char pad8c0[0x8fc - 0x8c0];
    EffHandle m8fc;
    void f(s32 state, Ctx* c);
    void startEff(EffHandle* h, const char* name) {
        if (m344 == 0) { h->p = 0; h->id = 0; return; }
        if (isValidQ(h)) func_00110848(h->p);
        *h = func_004A1B9C(m344, name);
    }
};

void Actor::f(s32 state, Ctx* c) {
    m4f0 = 1.0f;
    if (state == 0 && c->m2a != 0) func_004FABDC(this, 2, func_002B200C(c->m2a), 0);
    if (func_00588BE4(this) == ro_00693840) {
    if (c->m24 == 2 || c->m25 == 3) {
        func_004F32A4(this, 1);
        func_004FAB60(this, 1, 1);
        func_0058AC14(this);
        func_004FB070(this);
        (*m8bc)[0].m10 = 0.0f;
        stopEff(&m8fc, 1);
        return;
    }
    if (state != 0) {
        if (state == 2) return;
        if (!func_0058A1F4(this)) return;
    }
    func_004F32A4(this, 0);
    func_004FAB60(this, 0, 0);
    func_0058AC14(this);
    func_004FB070(this);
    (*m8bc)[0].m10 = 1.0f;
    if (isValid(m8fc) && m8fc.p->isPlaying()) return;
    startEff(&m8fc, "Fire");
    }
}
