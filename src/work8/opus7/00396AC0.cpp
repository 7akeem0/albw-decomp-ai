typedef unsigned char u8; typedef int s32;
struct Obj { u8 pad[0x13]; u8 m13; };
extern "C" void func_00396AC0(Obj* o, s32 k) {
    switch (k) {
    case 2: o->m13 = 4; break;
    case 3: o->m13 = 3; break;
    case 4: o->m13 = 10; break;
    case 9: o->m13 = 11; break;
    case 6: o->m13 = 6; break;
    case 7: o->m13 = 7; break;
    case 5: o->m13 = 8; break;
    case 8: o->m13 = 9; break;
    case 14: o->m13 = 17; break;
    case 15: o->m13 = 20; break;
    case 16: o->m13 = 19; break;
    case 17: o->m13 = 18; break;
    case 10: o->m13 = 14; break;
    case 11: o->m13 = 13; break;
    case 12: o->m13 = 15; break;
    case 18: o->m13 = 21; break;
    case 21: o->m13 = 25; break;
    case 22: o->m13 = 24; break;
    case 19: o->m13 = 22; break;
    case 20: o->m13 = 23; break;
    case 23: o->m13 = 26; break;
    case 24: o->m13 = 27; break;
    case 25: o->m13 = 28; break;
    case 27: o->m13 = 30; break;
    case 28: o->m13 = 31; break;
    case 13: o->m13 = 16; break;
    default: o->m13 = 1; break;
    }
}
