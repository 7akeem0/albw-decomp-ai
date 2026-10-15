#include "range.h"
struct C68B {u8 pad[0xc];u32 dead;u32 gap;Vec3*value;};
struct O68B {u8 pad[0x444];C68B*child;};
f32 get(C68B*p){if(p->dead)return p->value->z;else return p->value->z;}
extern "C" f32 func_003368B0(O68B*p){if(!p->child)return 0.0f;return get(p->child);}
