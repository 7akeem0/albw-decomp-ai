#include "range.h"
struct Msg{char pad[0x20];u16 value;};struct K{u32 v;};K kind(u16 n){K k={(n&0x7e0)>>5};return k;}bool func_00396978(void*,const Msg*a){return kind(a->value).v==3;}
