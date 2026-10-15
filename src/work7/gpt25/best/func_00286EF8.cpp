#include "../range_types.h"
struct Req5C26{char storage[0x5c];Req5C26(u16,u32,bool);};
struct Obj286E{char pad[0x414];void*anim;};
extern "C" void func_0016898C(void*,const Req5C26&);
void func_00286EF8(Obj286E*p){func_0016898C(p->anim,Req5C26(2,0,false));}
