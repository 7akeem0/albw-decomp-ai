// 0x21A2DC: element ctor (passed to __aeabi_vec_ctor as a literal): Word members initialised to 0 in the
// init list; the inlined Word(u32) ctor parameter puts the zero in r2.
typedef unsigned int u32;
struct Word { u32 v; Word(u32 x) : v(x) {} };
struct Elem_21A2DC { u32 pad0[3]; Word m12; Word m16; Elem_21A2DC(); };
Elem_21A2DC::Elem_21A2DC() : m12(0), m16(0) {}
