#include "range.h"
struct Node { Node* next; };
struct S { u32 m0; Node node; };
extern void func_0041D830(Node*,Node*);
inline void put(Node* p,Node* n) { if(n)func_0041D830(p,n); }
void f_58E988(S* p,Node* n) { put(&p->node,n); }
