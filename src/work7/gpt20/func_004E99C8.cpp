#include "ladder_types.h"
struct Sub4E99 {char pad[0x78];float m78;};
struct Object4E99 {char pad[0x50];Sub4E99* m50;};
extern void func_0025B630(float*,float,float);
void func_004E99C8(Object4E99* p,float v) {func_0025B630(&p->m50->m78,v,0.05f);}
