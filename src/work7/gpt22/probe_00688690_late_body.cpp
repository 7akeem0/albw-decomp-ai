#include "range.h"
void*operator new(u32,void*,s32)throw();
struct Pair{f32 a,b;Pair(){}Pair(f32 x,f32 y):a(x),b(y){}};
struct Base{virtual void v();u8 pad[0x1e8];f32 a,b;Pair pair;u8 end[0xc];Base(FactoryArg22*,const char*);};
struct D:Base{void init();D(FactoryArg22*p):Base(p,"SimpleWhite"){init();}};
void D::init(){a=0.9f;b=0.9f;pair=Pair(0.9f,1.f);}
D*target(FactoryArg22*p){return new(p->list->heaps[p->list->index],4)D(p);}
