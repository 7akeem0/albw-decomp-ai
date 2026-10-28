#include "range.h"
struct Actor {u8 pad[0x42];s16 index;u8 pad44[2];void*child;};
struct Rec {u8 a;u8 pad[15];};extern Rec data_007111A8[];
extern bool func_00559328(void*);
bool f_005401A0(Actor*a){if(data_007111A8[a->index].a!=0xb)return false;return func_00559328(a->child);}
