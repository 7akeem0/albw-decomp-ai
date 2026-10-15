#include "../range_types.h"
struct Child{char pad[0x44];u8 flag;void set(u8 n){flag=n;}};struct Obj{char pad0[0x484];Child*child;char pad1[0xc];s8 flag;u8 inv();};
u8 Obj::inv(){if(flag)return 0;return 1;}
extern "C" void f_002E01FC(Obj*p){if(p->flag)p->child->set(0);else p->child->set(1);}
