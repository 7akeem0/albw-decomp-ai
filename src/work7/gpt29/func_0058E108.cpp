#include "range.h"
struct C_58E108{char pad[13];u8 first,second;};struct O_58E108{char pad[284];C_58E108*child;};
bool f_58E108(O_58E108*p){C_58E108*c=p->child;if(c){if(c->first)return false;if(c->second)return false;}return true;}
