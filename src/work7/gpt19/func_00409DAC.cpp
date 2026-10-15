#include "range.h"
struct Base {char pad[0x118];Base();virtual ~Base();};
struct Member {u32 v;Member();};
struct S:Base {u32 zero;Member member;S();virtual ~S();};
S::S():zero(0){}
// Base C1 00408B94, Member C1 00413648, vtable 006F03F0.
