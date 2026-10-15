// 0x255D30: add to the u16 at +0x102 (beyond ldrh's 8-bit offset -> add r0,#0x100 base), return true
typedef unsigned short u16; typedef unsigned char u8;
struct S255D { u8 pad[0x100]; u16 m100; u16 m102; bool add(u16 v); };
bool S255D::add(u16 v) { m102 += v; return true; }
