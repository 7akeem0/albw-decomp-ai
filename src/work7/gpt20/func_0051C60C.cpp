#include "ladder_types.h"
struct Global51C6 {char pad0[0x25];u8 flag;};
extern Global51C6*data_00712468;
extern void*data_0070B898;
extern void func_00503970(void*,s32);
void target(){if(!data_00712468->flag)func_00503970(data_0070B898,8);}
