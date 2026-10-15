#include "range.h"
extern "C" void*func_0041F7EC(void*);
struct Obj401 {u8 pad[0x63c];u32 a;u8 pad640[0x1c];u32 b;u8 pad660[0x1c];u32 c;};
void*func_00401E14(Obj401*p,void*q,bool on){p->a=0;p->b=0;p->c=0;if(on)q=func_0041F7EC(q);return q;}
