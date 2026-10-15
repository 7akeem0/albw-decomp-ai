#include "../../range.h"
struct C{char pad[0x30];u8 flag;};struct S{char a[0x2d7];u8 done;char b[0x1b8];C*p;};extern "C" void func_00141FB4(S*);extern "C" void func_00142A6C(S*p){func_00141FB4(p);if(!p->p->flag)p->done=1;}
