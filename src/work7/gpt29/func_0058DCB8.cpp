#include "range.h"
struct C_58DCB8{char pad[13];u8 first,second;};struct O_58DCB8{char pad[272];C_58DCB8*child;};
bool f_58DCB8(O_58DCB8*p){C_58DCB8*c=p->child;if(c){if(c->first)return false;if(c->second)return false;}return true;}
