#define EN_EXTRA void f(int c);
#include "en204.h"
void En::f(int c) {
    u8 k = c;
    if ((u32)(k - 5) <= 4) {
        func_004F88A0(this, m3a4);
        m424->m2c &= ~0x20000;
    }
}
