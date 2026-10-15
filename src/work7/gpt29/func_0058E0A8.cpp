#include "range.h"
struct C_58E0A8{char pad[13];u8 first,second;};struct O_58E0A8{char pad[260];C_58E0A8*child;};
bool f_58E0A8(O_58E0A8*p){C_58E0A8*c=p->child;if(c){if(c->first)return false;if(c->second)return false;}return true;}
