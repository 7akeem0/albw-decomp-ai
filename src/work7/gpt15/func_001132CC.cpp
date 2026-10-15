#include "range.h"
struct E{char pad[0x28];u32* data;char tail[0x10];};struct S{char pad[0x18];E* data;};extern "C" u32 func_001132CC(S*p,u32 i,u32 j){return p->data[i].data[j];}
