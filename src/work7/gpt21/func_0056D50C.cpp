#include "range.h"
struct E12{u32 value,pad[2];};struct E16{u8 a;char pad1[7];u8 b;char pad9[7];};struct S{char pad[0x54];E12 first[48];E16 second[1];};bool f_56D50C(S*p,u32 index){if(p->first[index].value)return false;if(p->second[index].a==0&&p->second[index].b==0)return true;return false;}
