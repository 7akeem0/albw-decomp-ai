#include "range.h"
struct C_58D888{char pad[13];u8 first,second;};struct O_58D888{char pad[160];C_58D888*child;};
bool f_58D888(O_58D888*p){C_58D888*c=p->child;if(c){if(c->first)return false;if(c->second)return false;}return true;}
