// 0x1A0A5C: element ctor (passed to __aeabi_vec_ctor as a literal): Word members initialised to 0 in the
// init list; the inlined Word(u32) ctor parameter puts the zero in r2.
typedef unsigned int u32;
struct Word { u32 v; Word(u32 x) : v(x) {} };
struct Elem_1A0A5C { u32 pad0[6]; Word m24; Elem_1A0A5C(); };
Elem_1A0A5C::Elem_1A0A5C() : m24(0) {}
