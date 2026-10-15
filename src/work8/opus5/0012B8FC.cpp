typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

struct Msg { u8 pad[0x24]; u8 m24; };
bool func_0058A3E0(Msg* m);

struct Part;
void func_004F9554(Part* p, s32 a, s32 b, s32 c);

struct Self {
    u8 pad0[0x3a0];
    s32 m3A0;
    s32 m3A4;
    u8 pad3a8[0x430 - 0x3a8];
    Part* m430;
    Part* m434;
    u8 pad438[0x8e0 - 0x438];
    s32 m8E0;
    void setState(s32 s);
    void changeState(s32 s, s32 a, s32 b);
    void onMsg(s32 kind, Msg* m);
    void react(s32 a, s32 b);
};

void Self::onMsg(s32 kind, Msg* m)
{
    if (m3A0 == m3A4) {
        if (kind == 6 || func_0058A3E0(m) || m->m24 == 0xf) {
            setState(m8E0);
            func_004F9554(m430, 0, 0, 1);
            func_004F9554(m434, 0, 0, 1);
            changeState(1, -1, 0);
        }
    } else {
        if (kind == 6) {
            setState(m3A4);
            changeState(4, -1, 0);
        } else if (func_0058A3E0(m)) {
            react(6, 0);
        }
    }
}
