#include "ladder_types.h"
struct O4B20 {char pad0[0x1418];void* items[16];};
void* f_004B201C(O4B20* p,s32 i){if((u32)i<=15){void** a=p->items;return a[i];}return 0;}
