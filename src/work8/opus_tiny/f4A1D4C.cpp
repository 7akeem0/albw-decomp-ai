// 0x4A1D4C: element ctor (passed to __aeabi_vec_ctor as a literal): Word members initialised to 0 in the
// init list; the inlined Word(u32) ctor parameter puts the zero in r2.
typedef unsigned int u32;
struct Word { u32 v; Word(u32 x) : v(x) {} };
struct Elem_4A1D4C { u32 pad0[1]; Word m4; Elem_4A1D4C(); };
Elem_4A1D4C::Elem_4A1D4C() : m4(0) {}
