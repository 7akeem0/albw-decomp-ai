#include "range.h"
struct S{u8 pad[0x6c];u32 sub;};
void* f_0048D008(S* p,u32 i){if(i>1)return 0;return &p->sub;}
