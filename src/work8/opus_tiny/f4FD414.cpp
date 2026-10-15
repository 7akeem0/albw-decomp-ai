// 0x4FD414: element ctor {u32 0; u8 11; f32 1.0f}; the u8 member type has an out-of-line same-TU ctor
// (inlined late), giving zero in r1 and 11 in r2 like the original.
typedef unsigned int u32; typedef unsigned char u8; typedef float f32;
struct Kind4FD { u8 v; Kind4FD(); };
Kind4FD::Kind4FD() : v(11) {}
struct Elem4FD { u32 a; Kind4FD kind; f32 scale; Elem4FD(); };
Elem4FD::Elem4FD() : a(0), scale(1.0f) {}
