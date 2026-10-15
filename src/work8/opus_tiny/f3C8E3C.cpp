// 0x3C8E3C: element ctor (literal from 0x5EB560): 3-word member built by a 3-arg ctor with zeros
typedef unsigned int u32;
struct Triple { u32 a, b, c; Triple(u32 x, u32 y, u32 z) : a(x), b(y), c(z) {} };
struct Elem3C8 { Triple v; Elem3C8(); };
Elem3C8::Elem3C8() : v(0, 0, 0) {}
