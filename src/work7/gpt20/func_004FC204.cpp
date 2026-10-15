#include "ladder_types.h"
struct Flag4FC2 {u32 v;void set(u32 n){v|=n;}};
struct Object4FC2 {char pad[0x5a0];Flag4FC2 m5a0;};
u32 func_004FC204(Object4FC2* p,u32 a) {p->m5a0.set(0x80);return a;}
