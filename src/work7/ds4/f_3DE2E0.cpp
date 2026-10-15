#include "ds4.h"
extern s8 ro_00714A40[];
extern u8 data_007A06F0[];
extern "C" void func_00104164(void*, u32);
extern "C" void func_003DF8EC(void*, u32);
void f() {
  s8 a = ro_00714A40[0];
  s8 b = ro_00714A40[1];
  if ((a & ~b) != 0) {
    func_00104164(ro_00714A40 + 8, 1);
    u8 one = 1;
    ro_00714A40[2] = one;
    func_003DF8EC(data_007A06F0, one);
    ro_00714A40[1] = one;
  }
}
