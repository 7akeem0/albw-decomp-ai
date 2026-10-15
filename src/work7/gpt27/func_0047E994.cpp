#include "range.h"
struct Obj47E9{u8 pad[0x60];Ctrl231 a,b,c;};extern "C" void func_00231448(Ctrl231*);extern "C" void func_002317C0(Ctrl231*,f32);
void func_0047E994(Obj47E9*p){func_00231448(&p->b);func_00231448(&p->c);p->a.kind=0;func_002317C0(&p->a,1.f);}
