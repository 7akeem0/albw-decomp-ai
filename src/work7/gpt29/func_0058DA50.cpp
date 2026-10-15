#include "range.h"
struct C_58DA50{char pad[13];u8 first,second;};struct O_58DA50{char pad[276];C_58DA50*child;};
bool f_58DA50(O_58DA50*p){C_58DA50*c=p->child;if(c){if(c->first)return false;if(c->second)return false;}return true;}
