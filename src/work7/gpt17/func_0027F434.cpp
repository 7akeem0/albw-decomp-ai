#include "range.h"
struct Obj {u8 pad[0x4ec];u32 mode;};extern bool func_0052FE5C(Obj*);
bool f_0027F434(Obj*p){bool side=func_0052FE5C(p);u32 mode=p->mode;if(side){if(mode==0)return false;}else if(mode==2)return false;return true;}
