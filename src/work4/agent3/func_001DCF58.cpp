#define CLS_EXTRA inline void startEff(EffHandle* h, const char* name);
#include "../shared_include/cls_1DE.h"

struct EffOwner {
    char pad[4];
    s32 m4;
    char pad8[4];
    u32 mc;
};
struct Eff {
    char pad[0x1c];
    u32 m1c;
    EffOwner* m20;
    u32 m24;
    char pad28[0x3c - 0x28];
    u32 m3c;
    bool isId(u32 id) const { return m1c == id; }
    bool isIdR(const u32& id) const { return m1c == id; }
    bool isPlaying() const {
        if (m3c & 4)
            return true;
        if (m3c & 0x40)
            return true;
        EffOwner* o = m20;
        if (o && m24 == o->mc && o->m4 > 0)
            return true;
        return false;
    }
};
struct EffRet : public EffHandle { u32 x; };
inline bool isValid(const EffHandle& h) { return h.p && h.p->m1c == h.id; }
inline bool isValidP(const EffHandle* h) { return h->p && h->p->m1c == h->id; }
EffRet func_004A1B9C(Anim344* a, const char* name);
void func_00110848(Eff* e);
void func_004A3700(Eff* e);
int func_0053F5E0(Actor* a);
struct Flags324 { u8 b0:1; u8 b1:1; u8 b2:1; u8 b3:1; };
inline bool runFlag(const Obj604* o) { if (o->m324 & 1) return true; if (o->m324 & 8) return true; return o->m168 != 0; }
inline bool isValidQ(const EffHandle* h) { if (h->p == 0) return false; const u32& id = h->id; return h->p->m1c == id; }
void Cls::startEff(EffHandle* h, const char* name) {
    if (m344 == 0) {
        h->p = 0;
        h->id = 0;
        return;
    }
    if (isValidQ(h))
        func_00110848(h->p);
    *h = func_004A1B9C(m344, name);
}
void Cls::func_001DCF58() {
    Obj604* o = m604;
    if (runFlag(o) && func_0053F5E0(m614) != 8 && m614->m42 != 0x46) {
        if (isValid(m6dc) && m6dc.p->isPlaying())
            return;
        startEff(&m6dc, "Run");
    } else {
        if (isValid(m6dc) && m6dc.p->isPlaying()) {
            Eff* e = m6dc.p;
            u32 f = e->m3c;
            f &= ~0x44;
            f |= 8;
            e->m3c = f;
            func_004A3700(e);
        }
    }
}
