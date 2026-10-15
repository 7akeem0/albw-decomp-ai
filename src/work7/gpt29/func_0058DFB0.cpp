#include "range.h"
struct C_58DFB0{char pad[13];u8 first,second;};struct O_58DFB0{char pad[32];C_58DFB0*child;};
bool f_58DFB0(O_58DFB0*p){C_58DFB0*c=p->child;if(c){if(c->first)return false;if(c->second)return false;}return true;}
