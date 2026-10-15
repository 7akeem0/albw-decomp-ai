#include "range.h"
struct Node {u32 opaque;};
struct Obj {u8 pad[0x410];Node node;u8 gap[0x474-0x414];u8 active;};
extern void*data_00709D28;
extern void func_004A9120(void*,Node*);
void f_003249B4(Obj*p){if(p->active){p->active=0;func_004A9120(data_00709D28,&p->node);}}
