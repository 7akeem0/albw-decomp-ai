#include "range.h"
struct C{char pad[0xa00];f32 value;char gap[0xb34-0xa04];u8 flag;};struct S{char pad[0x48];C*child;u32 pad4c;f32 value;};bool f_55F390(S*p){if(p->child->flag&&p->child->value<=p->value)return true;return false;}
