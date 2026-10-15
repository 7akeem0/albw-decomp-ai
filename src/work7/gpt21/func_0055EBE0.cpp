#include "range.h"
struct V2 {f32 x,y;};
struct Data {u32 index;V2 value;};
struct R {char pad[0xc];Data data;};
struct C {char pad[0x28];V2 value;};
struct Slots {C*data[16];C*&at(u32 i){if(i<16)return data[i];return data[0];}};
struct S {char pad[0x1418];Slots slots;};
inline void apply(S*t,u32 i,V2 v){C*c=t->slots.at(i);if(c)c->value=v;}void f_55EBE0(R*p,S*target){apply(target,p->data.index,p->data.value);}
