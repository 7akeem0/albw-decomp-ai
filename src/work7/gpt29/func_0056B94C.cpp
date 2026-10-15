#include "range.h"
extern const s32 ro_006BB3D8[];
extern __attribute__((weak)) bool func_0056D40C(void*,u32*,s32);
bool f_0056B94C(void* p,u32 index,u32* out) { return func_0056D40C((char*)p+0x14,out,ro_006BB3D8[index]); }
