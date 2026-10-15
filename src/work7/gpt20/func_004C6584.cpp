#include "ladder_types.h"
extern u32 func_003D0710(O4C65*);
struct Word{s32 v;Word(s32 n):v(n){}};bool ge(s32 a,Word b){return a>=b.v;}
bool f_004C6584(O4C65* p){return ge((s32)(func_003D0710(p)&0x80000000u),Word(0));}
