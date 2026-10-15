#include "ladder_types.h"
struct Owner_00539A74{char pad[0x30];u8 bytes[2];u16 halves[2];};extern void*data_0070C8E0;extern bool func_005822A0(void*,u32,u32);
bool f_00539A74(Owner_00539A74*p,u32 i){u8*b=p->bytes;u16*h=p->halves;u32 kind=b[i];return func_005822A0(data_0070C8E0,h[i],kind);}
