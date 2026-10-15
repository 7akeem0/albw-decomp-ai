#include "range.h"
extern "C" void func_00104A90(s32);
extern "C" void func_0010587C(s32);
extern "C" void func_00104A2C(s32 mode) {
    switch(mode) {
    case 0:func_00104A90(3);break;
    case 1:func_00104A90(2);break;
    case 2:func_00104A90(1);return;
    default:return;
    }
    func_0010587C(mode);
}
