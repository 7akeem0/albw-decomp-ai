#include "range.h"
struct S{char pad[0x78];u8 kind;char gap[0x4b8-0x79];u16 flag;u8 pad4ba,value;};bool f_574678(S*p){if(p->kind==4&&p->flag==0&&p->value>=47)return true;return false;}
