#include "range.h"
struct C {char pad[0x3e8];u32 a;char pad3EC[0xa20-0x3ec];u32 b;};
struct S {char pad[0x48];C*child;};
extern bool func_0055F308(S*,s32,void*);
bool f_560668(S*p,s32 kind,void*arg){if(kind==5&&p->child->a!=p->child->b)return false;return func_0055F308(p,kind,arg);}
