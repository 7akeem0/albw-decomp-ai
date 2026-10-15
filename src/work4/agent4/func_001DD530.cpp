#include "cls4.h"

struct Part {
    void setFlag(bool v);   // 0x2D4188
};

struct PartA : public Part, public HandleObj {
};

struct Part65c : public HandleObj {
    TYPEINFO_ROOTN(Part65c)
    char pad4[0x2c - 4];
    u8 m2c;
};
struct Part670 : public HandleObj {
    TYPEINFO_ROOTN(Part670)
    char pad4[0x1c - 4];
    s8 m1c;
};
struct Part674 : public HandleObj {
    TYPEINFO_ROOTN(Part674)
    char pad4[0x1c - 4];
    s8 m1c;
};

void func_002D4188(HandleObj* p, s8 v);
void func_003B59C8(Part65c* p);

struct Actor {
    char pad0[0x42];
    s16 m42;
    char pad44[0x84 - 0x44];
    s8 m84;
    char pad85[0xc0 - 0x85];
    s8 mc0;
    s8 getC0() const;   // 0x53F9C0 out-of-line getter, armlink --inline turns the bl into its ldrsb
    bool isC0() const { return getC0() != 0; }
    char padc1[0xc5 - 0xc1];
    u8 mc5;
    u8 mc6;
};
u8 func_0053F5E0(Actor* a);
bool func_0053F418(Actor* a);
bool func_0054000C(Actor* a);
bool func_0053F164(Actor* a);
bool func_00540230(Actor* a);
bool func_0053F9C8(Actor* a);
bool func_0053F768(Actor* a);

struct Obj30;
void func_00300218(Obj30* o);
void func_002FF5BC(Obj30* o);

struct Obj600 {
    char pad[0x30];
    Obj30* m30;
    char pad34[0x52 - 0x34];
    u16 m52;
};
void func_0028C02C(Obj600* o, bool v);

struct Obj604;
void func_002D16D0(Obj604* o, bool v);

struct Snd;
extern Snd* data_0070BB80;
void func_00270878(Snd* s, int v);
void func_00270954(Snd* s);

struct Slot {
    void* owner;
    s8 mode;
    s8 cur;
    s8 getCur() const { return cur; }
    s8 pending;
    char pad7[5];
};

struct Counter {
    int v;
    Counter(int x) : v(x) {}
    operator int() const { return v; }
    Counter& operator++() { ++v; return *this; }
};
class Cls {
public:
    void func_001DD530();
    Slot* findSlot(s32 id);
    Slot* slotAt(int i) { Slot* a = m694; return &a[i]; }
    char pad004[0x5b0];
    f32 m5b0;
    char pad5b4[0x600 - 0x5b4];
    Obj600* m600;
    Obj604* m604;
    char pad608[0x614 - 0x608];
    Actor* m614;
    char pad618[0x630 - 0x618];
    HandleObj* m630[25];
    Slot m694[3];
    char pad6b8[0x6bc - 0x6b8];
    u8 m6bc;
};

Slot* Cls::findSlot(s32 id) {
    int z = 0;
    for (Counter i(z); i < 3; ++i) {
        if (m694[i].getCur() == id)
            return slotAt(i);
    }
    return 0;
}

void Cls::func_001DD530() {
    if (func_0053F5E0(m614) != 0xe) {
        if (m614->isC0())
            func_00270878(data_0070BB80, 0);
        else
            func_00270954(data_0070BB80);
    }
    if (!m6bc)
        return;
    if (func_0053F418(m614))
        return;
    Obj600* m = m600;
    Obj30* o = m->m30;
    if (m5b0 != 1.0f) {
        func_002D16D0(m604, true);
        func_002FF5BC(o);
        return;
    }
    func_00300218(o);
    func_0028C02C(m600, true);
    if (func_0054000C(m614))
        func_002D4188(m630[10], true);
    if (func_0053F164(m614))
        func_002D4188(m630[20], true);
    if (m614->mc5)
        func_002D4188(m630[m614->mc6 ? 0x15 : 0x16], true);
    if (func_00540230(m614))
        func_002D4188(m630[23], true);
    if (findSlot(12) && m614->m42 != 0x9c) {
        Part65c* p = DynamicCast<Part65c>(m630[11]);
        p->m2c = 0;
        func_003B59C8(p);
        func_002D4188(p, true);
    }
    if (m614->isC0())
        func_002D4188(m630[15], true);
    if (func_0053F9C8(m614)) {
        func_002D4188(m630[18], true);
        func_002D4188(m630[19], true);
    }
    if (m600->m52 == 0x8a)
        func_002D4188(m630[23], true);
    switch (m614->m84) {
    case -1:
        break;
    case 0:
        if (!m614->mc5)
            func_002D4188(m630[0], true);
        break;
    case 8:
        func_002D4188(m630[1], true);
        break;
    case 7:
        func_002D4188(m630[2], true);
        break;
    case 9:
        func_002D4188(m630[3], true);
        break;
    case 3:
        func_002D4188(m630[9], func_0053F768(m614));
        break;
    case 4:
        func_002D4188(m630[4], true);
        if (m614->m42 == 0x35)
            func_002D4188(m630[5], true);
        break;
    case 6:
        func_002D4188(m630[6], true);
        break;
    case 10:
        func_002D4188(m630[7], true);
        break;
    case 11:
        func_002D4188(m630[8], true);
        break;
    case 12:
        func_002D4188(m630[11], true);
        break;
    case 13:
        func_002D4188(m630[12], true);
        break;
    case 16: {
        Part670* p = DynamicCast<Part670>(m630[16]);
        func_002D4188(m630[16], p->m1c ^ 1);
        break;
    }
    case 17: {
        Part674* p = DynamicCast<Part674>(m630[17]);
        func_002D4188(m630[17], p->m1c ^ 1);
        break;
    }
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
        func_002D4188(m630[13], true);
        break;
    case 15:
        func_002D4188(m630[14], true);
        break;
    case 23:
        func_002D4188(m630[24], true);
        break;
    }
}
