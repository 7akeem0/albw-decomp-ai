#include "range.h"
struct S {char pad[0x10c];u16 values[16];};
u16* f_00417118(S* p,int i){if(i<16)return &p->values[i];return 0;}
