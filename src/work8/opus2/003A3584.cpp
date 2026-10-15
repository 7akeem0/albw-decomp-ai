typedef unsigned char u8;
#define T(name, fn) struct name { void fn(int); };
T(T00C, func_00386C40) T(T1F0, func_0039A33C) T(T2CC, func_00382E10) T(T30C, func_003AF63C)
T(T358, func_003A270C) T(T394, func_00398D70) T(T414, func_003A3BF0) T(T3D4, func_003BB2C4)
T(T454, func_003985BC) T(T554, func_003AB434) T(T5E8, func_00399520) T(T598, func_00397C6C)
T(T870, func_00383540) T(T6F8, func_003B0504) T(T834, func_003BCD74)
struct Obj {
    u8 state;
    u8 pad0[0x0b]; T00C a0c;
    u8 pad1[0x1f0-0x0d]; T1F0 a1f0;
    u8 pad2[0x2cc-0x1f1]; T2CC a2cc;
    u8 pad3[0x30c-0x2cd]; T30C a30c;
    u8 pad4[0x358-0x30d]; T358 a358;
    u8 pad5[0x394-0x359]; T394 a394;
    u8 pad6[0x3d4-0x395]; T3D4 a3d4;
    u8 pad7[0x414-0x3d5]; T414 a414;
    u8 pad8[0x454-0x415]; T454 a454;
    u8 pad9[0x554-0x455]; T554 a554;
    u8 pad10[0x598-0x555]; T598 a598;
    u8 pad11[0x5e8-0x599]; T5E8 a5e8;
    u8 pad11b[0x6f8-0x5e9]; T6F8 a6f8;
    u8 pad12[0x834-0x6f9]; T834 a834;
    u8 pad13[0x870-0x835]; T870 a870;
};

void func_003A3584(Obj* self)
{
    self->a0c.func_00386C40(0);
    self->a1f0.func_0039A33C(0);
    self->a2cc.func_00382E10(0);
    self->a30c.func_003AF63C(0);
    self->a358.func_003A270C(0);
    self->a394.func_00398D70(0);
    self->a414.func_003A3BF0(0);
    self->a3d4.func_003BB2C4(0);
    self->a454.func_003985BC(0);
    self->a554.func_003AB434(0);
    self->a5e8.func_00399520(0);
    self->a598.func_00397C6C(0);
    self->a870.func_00383540(0);
    switch (self->state) {
    case 1: case 2: self->a0c.func_00386C40(1); self->a1f0.func_0039A33C(1); break;
    case 3: self->a2cc.func_00382E10(1); break;
    case 4: self->a30c.func_003AF63C(1); break;
    case 6: self->a358.func_003A270C(1); break;
    case 7: self->a394.func_00398D70(1); break;
    case 8: self->a414.func_003A3BF0(1); break;
    case 9: self->a3d4.func_003BB2C4(1); break;
    case 11: self->a554.func_003AB434(1); break;
    case 10: self->a454.func_003985BC(1); break;
    case 17: case 18: case 19: case 20: case 21: case 22: case 23: case 30: case 31:
        self->a598.func_00397C6C(1); break;
    case 14: self->a6f8.func_003B0504(1); break;
    case 13: self->a5e8.func_00399520(1); break;
    case 15: self->a834.func_003BCD74(1); break;
    case 24: case 25: self->a870.func_00383540(1); break;
    default: break;
    }
}
