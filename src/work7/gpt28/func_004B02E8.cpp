#include "range.h"
extern bool func_001E4AE4(void*,s32);
extern void func_004AF3C4(void*,u32);
bool f_004B02E8(void* owner,s32 value) { if(!func_001E4AE4(owner,value)) return false; func_004AF3C4(owner,1); return true; }
