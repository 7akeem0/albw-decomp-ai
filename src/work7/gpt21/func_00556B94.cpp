#include "range.h"
struct C{char pad[0x6c];void*node;};struct S{char pad[0x14];C*child;};struct G{char pad[0x44];void*node;};extern G*data_0070B728;
bool f_556B94(S*p){void*n=p->child->node;if(data_0070B728->node&&data_0070B728->node==n)return true;return false;}
