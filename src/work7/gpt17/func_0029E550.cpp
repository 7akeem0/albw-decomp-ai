#include "range.h"
struct Child{u8 pad[0xd];u8 first,second;};
struct Obj{u8 pad[0x18];Child*child;};
bool f_0029E550(Obj*p){Child*c=p->child;if(c){if(c->first||c->second)return false;return true;}return true;}
