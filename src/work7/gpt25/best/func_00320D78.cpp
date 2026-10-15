#include "../range_types.h"
extern "C" void func_0010E3C4(void*,const void*,u32);
void func_00320D78(u16*out,const u16*src,u32 n){if(n>10)n=10;if(src&&n){func_0010E3C4(out,src,n*2);out[n]=0;}}
