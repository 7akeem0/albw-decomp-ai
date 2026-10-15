#include "range.h"
struct C{char pad[0x44];u8 flag;};struct O{char pad[0x40c];void*ctl;char p410[0x448-0x410];u8 flag;char p449[3];C*child;};extern void func_004CF478(void*,bool,u32);void f(O*p){func_004CF478(p->ctl,false,0);p->flag=0;if(p->child)p->child->flag=0;}
