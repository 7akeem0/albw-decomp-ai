#include "ladder_types.h"
extern u32 data_007161D8;
struct O4A25 {u32* a;u32* b;char pad8[0x18];u32 c,d;O4A25(u32,u32);};
O4A25::O4A25(u32 x,u32 y):a(&data_007161D8),b(&data_007161D8),c(x),d(y){}
