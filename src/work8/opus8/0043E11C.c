typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;
typedef struct Player Player;
extern Player* data_0070FB60;
void func_00167E04(void* a, void* b, s32 c) __attribute__((weak));
s32 func_00537B38(Player* p);
s32 func_0053FB24(Player* p);
s32 func_0055696C(Player* p, s32 n);
typedef struct Hud { char pad[0x1c]; void* m1c; char pad20[0x104 - 0x20]; void* m104; void* m108; u32 m10c; u8 b110; } Hud;
void* func_00573650(Hud* h, u8 m);

static u8 getMode(Player* p) {
    u8 v;
    if (func_0053FB24(p) != 0) v = 5;
    else if (func_0055696C(p, 0) == 0) v = 0;
    else {
        s32 k = func_00537B38(p);
        v = 1;
        if (k != 0) {
            if (k == 1) v = 2;
            else if (k == 2) v = 3;
            else if (k == 3) v = 4;
        }
    }
    return v;
}
void func_0043E11C(Hud* h)
{
    Player* p = data_0070FB60;
    h->b110 = getMode(p);
    switch (h->b110) {
    case 0:
        if (h->m104 != 0) func_00167E04(h->m1c, h->m104, 0);
        func_00167E04(h->m1c, h->m108, 0);
        break;
    case 1:
    case 2:
    case 3:
    case 4:
        if (h->m104 != 0) func_00167E04(h->m1c, h->m104, 0);
        h->m104 = func_00573650(h, h->b110);
        func_00167E04(h->m1c, h->m104, 1);
        func_00167E04(h->m1c, h->m108, 0);
        break;
    case 5:
        if (h->m104 != 0) func_00167E04(h->m1c, h->m104, 0);
        func_00167E04(h->m1c, h->m108, 1);
        break;
    }
}
