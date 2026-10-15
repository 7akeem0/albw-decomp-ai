#include "range.h"
struct C_58DA24{char pad[13];u8 first,second;};struct O_58DA24{char pad[32];C_58DA24*child;};
bool f_58DA24(O_58DA24*p){C_58DA24*c=p->child;if(c){if(c->first)return false;if(c->second)return false;}return true;}
