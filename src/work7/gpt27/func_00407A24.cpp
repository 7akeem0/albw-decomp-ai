#include "range.h"
struct Node407;
struct Owner407{u32 a,b;Node407*first,*second;};
struct Node407{Owner407*owner;};
void func_00407A24(Node407*p){if(p->owner){if(p->owner->first==p)p->owner->first=0;if(p->owner->second==p)p->owner->second=0;if(p->owner)p->owner=0;}}
