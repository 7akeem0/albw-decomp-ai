#include "range.h"
extern u16 bss_007A3DC4[16];
struct Owner41B{u8 pad[0xd0];u16 slots[16];};
u16*func_0041B9E0(Owner41B*p,s32 i){if(i<16)return&p->slots[i];if(i<32)return&bss_007A3DC4[i-16];return 0;}
