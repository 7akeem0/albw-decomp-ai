#include "range.h"
struct Record {u8 kind;u8 pad[15];};extern const Record data_007111A8[];
struct Child {u8 pad[0x42];s16 id;u32 reserved;void*state;};
extern bool func_0031EDC4(void*,const Vec3*,f32,u8);
bool f_002917DC(Child*q,u8 flag,f32 rate){if(data_007111A8[q->id].kind!=2)return false;return func_0031EDC4(q->state,0,rate,flag);}
