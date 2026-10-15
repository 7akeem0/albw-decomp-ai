#include "range.h"
struct Child { u32 m0,bytes; };
struct S { char pad[0xf0]; Child* child; };
u8 f_54B260(const S* p,u32 i) { return (u8)(p->child->bytes>>(i*8)); }
