#include "range.h"
struct Item{char pad[0x18];u32 value;};struct Buffer{char pad[0xc];u32 num,max;Item*data;Item&at(u32 i){if(i<num)return data[i];return data[0];}};struct S{char pad[0x410];Buffer*ctrl;};
u32 f_58AC5C(S*p){if(!p->ctrl)return 0;return p->ctrl->at(0).value;}
