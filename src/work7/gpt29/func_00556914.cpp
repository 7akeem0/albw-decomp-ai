#include "range.h"
struct Kind5569 {char pad0[0x42];s16 kind;};
struct Owner5569 {char pad0[0x14];Kind5569*child;};
bool f_00556914(Owner5569*p){s32 k=p->child->kind;return k==0x44||k==0x45||k==0x49;}
