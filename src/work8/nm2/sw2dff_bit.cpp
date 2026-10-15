#include "../../work7/gpt25/range_types.h"
struct BitWord2DFFF4{u32 v;BitWord2DFFF4(u32 x):v(x){}void set(u32 mask){*this=BitWord2DFFF4(v|mask);}};
struct Bits2DFFF4{BitWord2DFFF4 words[3];void set(u32 i);};
struct Obj2DFFF4{u32 count,capacity;Bits2DFFF4*items;Bits2DFFF4*at(u32 i){if(i<capacity)return items+i;return items;}};
extern "C" void f_002DFFF4(Obj2DFFF4*p,u32 i){p->at(p->count)->set(i);}
void Bits2DFFF4::set(u32 i){BitWord2DFFF4*w=&words[i>>5];u32 bit=1u<<(i&31);w->set(bit);}
