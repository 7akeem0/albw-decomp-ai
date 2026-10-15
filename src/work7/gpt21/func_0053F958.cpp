#include "range.h"
struct A{char pad[0x438];s32 active;char gap[0x5b0-0x43c];f32 value;};struct S{char pad[0x10];A*actor;char gap[0xc9-0x14];u8 flag;};
bool f_53F958(S*p){if(p->actor->active&&p->actor->value==1.0f&&p->flag)return true;return false;}
