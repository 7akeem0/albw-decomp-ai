#include "range.h"
struct Manager2582 {char pad[0x44];u32 active;};
extern Manager2582* data_0070B728;
struct Object2582 {char pad[0x60];u16 status;char pad62[0x6c-0x62];u8 flag;};
void target(Object2582*p){if(data_0070B728&&data_0070B728->active){p->status=2;p->flag=1;}}
