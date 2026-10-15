#include "range.h"
struct Child5416{char pad0[0xd];u8 a,b;};struct Owner5416{char pad0[0x14];Child5416*child;};
bool f_00541648(Owner5416*p){Child5416*c=p->child;if(c){if(c->a!=0)return false;if(c->b!=0)return false;}return true;}
