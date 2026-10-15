typedef unsigned char u8; typedef unsigned int u32;
typedef struct Sub8BC { u8 pad[0xa]; u8 ma; } Sub8BC;
typedef struct Sub8C4 { u8 pad[0x8bc]; Sub8BC* m8bc; } Sub8C4;
typedef struct Obj { u8 pad[0x8c0]; u8 m8c0; u8 m8c1; u8 pad2[2]; Sub8C4* m8c4; } Obj;

static int has(Obj* o, u8 k) { return o->m8c0 == k || o->m8c1 == k; }

int func_003A2C34(Obj* o, u32 kind)
{
    switch (kind) {
    case 2:
        return o->m8c4->m8bc->ma != 0;
    case 1:
    case 12:
        return 1;
    case 3:
        if (has(o, 3)) return 1;
    default:
        return 0;
    case 5: if (has(o, 1)) return 1; return 0;
    case 4: if (has(o, 2)) return 1; return 0;
    case 6: if (has(o, 6)) return 1; return 0;
    case 7: if (has(o, 7)) return 1; return 0;
    case 8: if (has(o, 5)) return 1; return 0;
    case 9: if (has(o, 8)) return 1; return 0;
    case 10: if (has(o, 4)) return 1; return 0;
    case 11: if (has(o, 9)) return 1; return 0;
    case 13: if (has(o, 0xb)) return 1; return 0;
    case 14: if (has(o, 0xa)) return 1; return 0;
    case 15: if (has(o, 0xc)) return 1; return 0;
    case 17: if (has(o, 0xe)) return 1; return 0;
    case 18: if (has(o, 0x11)) return 1; return 0;
    case 19: if (has(o, 0x10)) return 1; return 0;
    case 20: if (has(o, 0xf)) return 1; return 0;
    case 21: if (has(o, 0x12)) return 1; return 0;
    case 24: if (has(o, 0x16)) return 1; return 0;
    case 25: if (has(o, 0x15)) return 1; return 0;
    case 26: if (has(o, 0x17)) return 1; return 0;
    case 27: if (has(o, 0x18)) return 1; return 0;
    case 28: if (has(o, 0x19)) return 1; return 0;
    case 29: if (has(o, 0x1a)) return 1; return 0;
    case 22: if (has(o, 0x13)) return 1; return 0;
    case 23: if (has(o, 0x14)) return 1; return 0;
    case 30: if (has(o, 0x1b)) return 1; return 0;
    case 31: if (has(o, 0x1c)) return 1; return 0;
    }
}
