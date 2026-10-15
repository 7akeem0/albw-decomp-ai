#include "range.h"
struct OE064 {u8 pad[0x27];u8 mode;};extern u8 bss_007A06F0[];
extern "C" bool func_003DF844(void*,s32);
extern "C" bool func_003DE064(OE064*p,s32 n){if(n!=0&&n!=1)return false;p->mode=n;return func_003DF844(bss_007A06F0,n);}
