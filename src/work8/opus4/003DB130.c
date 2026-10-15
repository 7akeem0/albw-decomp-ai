typedef unsigned int u32; typedef int s32; typedef unsigned char u8;
extern s32 func_003D239C(void);
extern s32 func_003D25A0(void* a);
#define S1(a) do { out[0] = a; out[1] = 1; *n = *n + 1; } while (0)
#define S2(a) do { out[0] = a; out[1] = 4; *n = *n + 1; } while (0)
void FUN_003db130(void* a, u8* out, s32* n)
{
    u8 v;
    *n = 1;
    switch (func_003D25A0(a)) {
    case 0:
        if (func_003D239C() == 0) { out[0] = 0; return; }
        break;
    case 1:
        switch (func_003D239C()) {
        case 1: out[0] = 1; return;
        case 2: S1(2); return;
        case 5: S1(3); return;
        case 9: S1(0xe); return;
        }
        break;
    case 2:
        switch (func_003D239C()) {
        case 1: out[0] = 4; return;
        case 2: S2(5); return;
        case 5: S2(8); return;
        case 3: S2(6); return;
        case 4: S2(7); return;
        case 9: S2(0xc); return;
        case 10: S2(0xd); return;
        case 8: S2(9); return;
        }
        break;
    case 4:
        if (func_003D239C() == 6) { v = 0xb; goto set; }
        break;
    case 5:
        if (func_003D239C() != 7) break;
        v = 0xa;
    set:
        out[0] = v;
        return;
    case 6:
        switch (func_003D239C()) {
        case 1: v = 0x10; goto set;
        case 0xb: v = 0xf; goto set;
        }
        break;
    }
    *n = 0;
}
