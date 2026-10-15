#include "range.h"
struct Global20C { char pad0[0x10]; u32 value; };
extern Global20C data_00714998;
extern "C" void func_0010412C(u32*,u32);
extern "C" u32 func_001020C4(u32 value) {
    data_00714998.value = value;
    u32 local = value;
    func_0010412C(&local,0x50201c8);
    return 0;
}
