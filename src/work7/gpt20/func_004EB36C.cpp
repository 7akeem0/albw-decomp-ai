#include "ladder_types.h"
struct Sub4E99 {char pad[0x78];float m78;};
struct Object4E99 {char pad[0x50];Sub4E99* m50;};
extern void func_0025B7C4(float*,float,float);
void func_004EB36C(Object4E99* p,float v) {func_0025B7C4(&p->m50->m78,v,0.05f);}

