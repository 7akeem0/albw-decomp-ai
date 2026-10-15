typedef unsigned int u32; typedef int s32;
extern "C" {
void func_003CE91C(int, int);
u32 func_003CEBD8(u32, int);
u32 func_003D029C(u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32);
}
struct P { u32 a, b, c, d, e, f, g; };
extern "C" int func_004C6494(u32 p1, P* p, int flag) {
    if (flag) func_003CE91C(0, 0);
    u32 r = func_003D029C(p1, func_003CEBD8(p->a, 0), p->b, p->c, p->d, p->e, p->f, p->g, 0xFC400, 0x3C00, 0x14, 3, 0x19000);
    if ((s32)(r & 0x80000000u) >= 0) return 0;
    if (r == 0xC8E10868) return 5;
    if (r == 0xC8E10867) return 6;
    if (r == 0xC8A10BF0) return 1;
    if (r == 0xE0E10BFD || r == 0xC8E10BE9 || r == 0xC8E1086A) return 7;
    return 7;
}
