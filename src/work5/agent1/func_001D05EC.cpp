#define ACT_EXTRA bool func_001D05EC(const Msg& m);
#include "a1_1d0.h"
bool Act1D0::func_001D05EC(const Msg& m) {
    Sub2C* s = m.m2c;
    if (s) {
        switch (s->m1) {
        case 1: case 5: case 6: case 8: case 11: case 12: case 15:
            return false;
        }
    }
    return true;
}
