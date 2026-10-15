#include "range.h"
struct Obj244324{char pad[0x2d7];u8 flag;char pad2d8[0x838-0x2d8];float value;};
extern void func_004BC8D8(Obj244324*);
extern void func_004BC61C(Obj244324*);
extern "C" void target(Obj244324*p){if(!p->flag){func_004BC8D8(p);func_004BC61C(p);}p->value=-.35f;}
