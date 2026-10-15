#include "range.h"
struct C_58DC8C{char pad[13];u8 first,second;};struct O_58DC8C{char pad[264];C_58DC8C*child;};
bool f_58DC8C(O_58DC8C*p){C_58DC8C*c=p->child;if(c){if(c->first)return false;if(c->second)return false;}return true;}
