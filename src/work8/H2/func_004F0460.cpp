#include "range.h"
bool f_004F0460(s32 t) {
    switch (t) {
    case 0x0e: case 0x0f: case 0x10: case 0x11: case 0x12: case 0x13: case 0x14:
    case 0x17: case 0x18: case 0x19: case 0x1b: case 0x1c:
        return true;
    default:
        break;
    }
    return t == 0x15 || t == 0x16;
}
