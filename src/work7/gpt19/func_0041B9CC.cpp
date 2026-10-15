#include "range.h"
struct S {char pad[0x90];void* values[16];};
void* f_0041B9CC(S* p,int i){if(i>15)return 0;return p->values[i];}
