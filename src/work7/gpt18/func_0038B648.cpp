#include "range.h"
struct C648 {u8 pad[0x654];u32 value;};
struct B648 {B648(void*);virtual ~B648();u8 pad[0x24];C648*owner;u8 gap[0x70-0x2c];};
struct D648:B648 {u32 value;D648(void*);};
D648::D648(void*p):B648(p){value=owner->value;}
