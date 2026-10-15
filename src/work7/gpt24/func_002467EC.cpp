#include "range.h"
struct Model246724{char pad[0x158];float value;};
struct Block246724{char pad[0x10];Model246724*model;char pad14[0x38-0x14];u16 count;};
struct Obj246724{char pad[0x400];Block246724 block;};
float progress246724(float n,const float&low,const float&high){return (n-low)/(high-low);}
extern "C" void target(Obj246724*p){Block246724&b=p->block;u32 n=b.count;if(n<=60){p->block.model->value=progress246724(float(n),0.f,60.f);++b.count;}}
