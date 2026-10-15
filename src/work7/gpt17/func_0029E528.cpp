#include "range.h"
struct Child{u8 pad[0xd];u8 first,second;bool test();};struct Obj{u8 pad[0x18];Child*child;};
bool f_0029E528(Obj*p){Child*c=p->child;if(c){if(c->first==3&&c->second==3)return true;return false;}return false;}
