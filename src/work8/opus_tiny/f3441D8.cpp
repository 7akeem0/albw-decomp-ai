// 0x3441D8: element ctor (vec_ctor literal from 0x3441F0): typed value members (u8/u32/u16/u8) with
// converting ctors init-listed to 0 -> one zero in r2 for all four stores.
typedef unsigned int u32; typedef unsigned short u16; typedef unsigned char u8;
template<class T> struct Val { T v; Val(T x) : v(x) {} };
struct Elem3441 { u32 pad[6]; Val<u8> m18; Val<u32> m1c; Val<u16> m20; Val<u8> m22; Elem3441(); };
Elem3441::Elem3441() : m18(0), m1c(0), m20(0), m22(0) {}
