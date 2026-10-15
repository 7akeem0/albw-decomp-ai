#define EN_EXTRA void f(int a);
#include "en204.h"
void En::f(int a) {
    if (a == 8) return;
    if (m30 == 1) {
        func_004F88A0(this, m8d0);
        m424->m2c |= 0x20000;
    }
}
