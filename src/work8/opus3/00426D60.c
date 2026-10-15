typedef int s32;
extern void* data_0070FB60;
extern s32 func_00537C00(void* p, s32 i);

s32 FUN_00426d60(s32 k)
{
    switch (k) {
    case 9: return 0;
    case 7: return 1;
    case 10: return 2;
    case 2: return 3;
    case 8: return 4;
    case 11: return 5;
    case 3: return 6;
    case 6: return 7;
    case 4: return 8;
    case 1: return 9;
    case 16: return 0x10;
    case 17: return 0x11;
    case 29: return 0x12;
    case 18: case 19: case 20: case 21: case 22:
        switch (func_00537C00(data_0070FB60, k - 18)) {
        case 0: return 10;
        case 1: return 11;
        case 2: return 12;
        case 3: return 13;
        case 4: return 14;
        case 5: return 0x13;
        case 6: return 0x14;
        case 7: return 0x15;
        case 8: return 0xf;
        case 12: return 0x16;
        }
        break;
    }
    return 0x1a;
}
