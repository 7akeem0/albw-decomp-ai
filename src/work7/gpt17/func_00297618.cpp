#include "range.h"
struct Child {u8 pad[0x84];u8 flag;void set(u8 n){flag=n;}};
struct Obj {u8 pad[0x38];void*list;void*ctl;Child*child;};
extern void func_002DEF00(void*,s32);
extern void func_00297724(void*);
extern void func_00297648(void*);
void f_00297618(Obj*p,s32 arg){func_002DEF00(p->ctl,arg);p->child->set(0);func_00297724(p->list);func_00297648(p->list);}
