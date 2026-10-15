#include "range.h"
struct Child{char pad[0x78];u8 mode;};struct S{char pad[0x128];Child*child;};
bool f_58DB88(const S*p){return !p->child||p->child->mode==2;}
