#include "ds4.h"
extern u8* data_00712468;
extern u8* data_00711DE8;
extern u8* data_00712588;
extern "C" void func_004C36DC(void*, u32);
extern "C" void func_0014A70C(void*, u32);
extern "C" void func_0014A980(void*, u32);
extern "C" void func_0014A814(void*, u32);
extern "C" void func_002DF3F0(void*);
void f() {
  func_004C36DC(data_00711DE8, *(u32*)(data_00712468 + 0x112c));
  func_0014A70C(data_00712468, 1);
  func_0014A980(data_00712468, 1);
  func_0014A814(data_00712468, 1);
  func_002DF3F0(data_00712588);
}
