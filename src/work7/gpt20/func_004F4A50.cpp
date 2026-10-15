#include "ladder_types.h"
struct O4F4A {char pad0[0x974];u8 flag;};
struct A4F4A {char pad0[0x20];u16 kind;};
extern void func_004F4A68(O4F4A*,A4F4A*);
void f_004F4A50(O4F4A* p,A4F4A* a){if((a->kind&0x7e0)==0xc0)p->flag=1;func_004F4A68(p,a);}
