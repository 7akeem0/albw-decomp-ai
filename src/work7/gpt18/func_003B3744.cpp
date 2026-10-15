#include "range.h"
struct V374 {f32 x,y,z;void all(f32 f){x=f;y=f;z=f;}};struct C374 {u8 pad[0x4e4];V374 scale;};struct O374 {u8 pad[0x48];C374*child;};
extern "C" void func_003B3744(O374*p){p->child->scale.all(1.f);}
