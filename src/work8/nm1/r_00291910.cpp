#include "range.h"
struct Record {u8 kind;u8 pad[15];};extern const Record data_007111A8[];
struct Child {u8 pad[0x42];s16 id;u32 reserved;void*state;};
extern bool func_0031EFC4(void*);
bool f_00291918(Child*q){if(data_007111A8[q->id].kind==2&&q->state)return func_0031EFC4(q->state);return false;}
