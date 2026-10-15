#include "range.h"
struct C58F0 {char pad[0xb0];u8 valid,padB1;u16 value;};
struct S58F0 {char pad[0x1130];C58F0* child;};
extern S58F0* data_00712468;
s32 f_58F0D4(){C58F0*c=data_00712468->child;return c->valid?c->value:-1;}
