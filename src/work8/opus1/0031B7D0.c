typedef unsigned int u32; typedef int s32;

extern void* G_0070FB60;
extern s32 FUN_00537c00(void* p);

s32 FUN_0031b7d0(s32 n)
{
    if ((u32)(n - 0x12) <= 4) {
        switch (FUN_00537c00(G_0070FB60)) {
        case 0: return 0x12;
        case 1: return 0x13;
        case 2: return 0x14;
        case 3: return 0x16;
        case 4: return 0x15;
        case 5: return 0x17;
        case 6: return 0x18;
        case 7: return 0x19;
        case 8: return 0x1a;
        case 9: return 0x1b;
        case 10: return 0x1c;
        case 0xc: return 0x1d;
        case 0xd: return 0x1e;
        case 0xb: return 0x1f;
        }
    def:
        return 0x20;
    } else {
        switch (n) {
        case 0: return 0;
        case 1: return 1;
        case 0x1f: return 2;
        case 2: return 3;
        case 3: return 4;
        case 6: return 5;
        case 0xb: return 6;
        case 4: return 7;
        case 5: return 8;
        case 8: return 9;
        case 9: return 10;
        case 7: return 0xb;
        case 10: return 0xc;
        case 0xc: return 0xd;
        case 0xd: return 0xe;
        case 0xe: return 0xf;
        case 0x10: return 0x10;
        case 0x11: return 0x11;
        }
        goto def;
    }
}
