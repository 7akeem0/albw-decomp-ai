#include "range.h"
struct Actor53Proxy14{char pad[0x42];s16 index;};
struct Rec {u8 a;u8 pad[15];};extern Rec data_007111A8[];
bool f_0053F938(Actor53Proxy14*a){return data_007111A8[a->index].a==0xb;}
