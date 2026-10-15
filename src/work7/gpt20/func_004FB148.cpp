#include "ladder_types.h"
struct Sub4FB1 {char pad[0x264];u8 m264,m265;};
struct Object4FB1 {char pad[0x510];Sub4FB1* m510;};
void func_004FB148(Object4FB1* p,u8 a,u8 b) {Sub4FB1* s=p->m510;s->m264=a;s->m265=b;}
