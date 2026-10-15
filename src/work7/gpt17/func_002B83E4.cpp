#include "range.h"
struct Obj{u8 pad[0x698];u32 start,end;};
bool f_002B83E4(void*,Obj*p){if(p){if(p->end-p->start>=60)return true;return false;}return false;}
