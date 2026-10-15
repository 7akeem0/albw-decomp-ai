#include "../../work7/gpt15/range.h"
struct State{void func_0065743C(s32);};struct S{u8 pad[0x4f8];State state;};extern bool func_001E4A5C(S*,s32,const Vec3*);extern bool func_0013DD1C(S*,const Vec3*);
bool func_0013E044(S*p,s32 a,const Vec3*pos){if(func_001E4A5C(p,a,pos)){if(func_0013DD1C(p,pos))p->state.func_0065743C(3);else p->state.func_0065743C(2);return true;}return false;}
