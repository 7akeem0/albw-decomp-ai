#include "range.h"
struct Node {u32 first;u32 sub[2];u32 field;};struct S {char pad[0x10];u32 list;};extern void func_00111EF0(u32*,u32*);
void f_003FF904(S* p,Node* n){u32* dest=&p->list;u32* source=n->sub;func_00111EF0(dest,source);n->field=0;}
