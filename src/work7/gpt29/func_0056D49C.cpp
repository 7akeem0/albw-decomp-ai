#include "range.h"
struct Child56D { u32 pad0; u8 flag; };
struct Owner56D { Child56D* child; };
bool f_0056D49C(Owner56D* p) { if(!p->child)return false;return p->child->flag==0; }
