#include "range.h"
struct Node {Node* next;};struct S {Node* head;};
Node* f_0041D840(S* p){Node* n=p->head;if(n)p->head=n->next;return n;}
