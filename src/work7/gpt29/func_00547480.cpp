#include "range.h"
struct C { char pad[0xd]; u8 a,b; };struct O { char pad[0x20];C*child; };
bool f(O*p){C*c=p->child;if(c){if(c->a!=3)return false;if(c->b!=3)return false;return true;}return false;}
