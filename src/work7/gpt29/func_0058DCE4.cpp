#include "range.h"
struct C_58DCE4{char pad[13];u8 first,second;};struct O_58DCE4{char pad[292];C_58DCE4*child;};
bool f_58DCE4(O_58DCE4*p){C_58DCE4*c=p->child;if(c){if(c->first)return false;if(c->second)return false;}return true;}
