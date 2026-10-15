#include "range.h"
struct Node {u32 first;};
struct Out {u32 first,second;};
struct S {char pad[0x3c];void*resource;};
extern Node* func_0056B164(void*,u32);
extern u32 func_0056AED8(Node*);
bool f_56CD24(S*p,u32 index,Out*out){Node*n=func_0056B164(p->resource,index);if(!n)return false;out->first=n->first;out->second=func_0056AED8(n);return true;}
