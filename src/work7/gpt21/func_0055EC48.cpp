#include "range.h"
struct R {char pad[0xc];u32 index;f32 value;};
struct Slots {void*data[16];void*&at(u32 i){if(i<16)return data[i];return data[0];}};
struct S {char pad[0x1418];Slots slots;};
extern void func_001FE928(void*,f32);
void f_55EC48(R*p,S*target){u32 i=p->index;f32 v=p->value;void*c=target->slots.at(i);if(c)func_001FE928(c,v);}
