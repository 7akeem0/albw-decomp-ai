#include "range.h"
struct ZeroWord{u32 v;ZeroWord():v(0){}};struct A{char pad[0x2cc];u32 value;};struct O{virtual ~O();ZeroWord a;u32 b,c;u8 flag;char p11[3];void*ptr;u32 d;O(A*);};O::O(A*p):a(),b(0),c(0),flag(0),ptr(0),d(0){c=p->value;}
