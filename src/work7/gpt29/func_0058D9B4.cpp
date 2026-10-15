#include "range.h"
struct C_58D9B4{char pad[13];u8 first,second;};struct O_58D9B4{char pad[276];C_58D9B4*child;};
bool f_58D9B4(O_58D9B4*p){C_58D9B4*c=p->child;if(c){if(c->first)return false;if(c->second)return false;}return true;}
