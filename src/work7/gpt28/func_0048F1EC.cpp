#include "range.h"
extern u32 bss_007A3AA8;
extern void func_0056D50C(u32*, bool);
void f_0048F1EC(void*, s32 kind) {
    bool enabled = false;
    switch(kind) { case 0: break; case 1: enabled = true; break; }
    func_0056D50C(&bss_007A3AA8, enabled);
}
