#include "range.h"
struct O{char pad[0x410];u8 flag;};extern void func_00665E08(void*,s32);bool f(O*p){if(p->flag==1){func_00665E08((char*)p+0x40c,3);return true;}return false;}
