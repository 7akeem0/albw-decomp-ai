#include "range.h"
struct Entry{u32 words[13];};struct S{char pad[0xc];u32 count;Entry entries[20];};void*f(S*p,u32 i){u32 n=p->count;if(i>=n)return p;Entry*a=p->entries;if(i>=20)return a;return a+i;}
