#include "range.h"
struct C_547454{char pad[13];u8 first,second;};struct O_547454{char pad[32];C_547454*child;};
bool f_547454(O_547454*p){C_547454*c=p->child;if(c){if(c->first)return false;if(c->second)return false;}return true;}
