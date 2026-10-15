// 0x26C088 (vtable slot): clear m3e8, snap angle m900 to the nearest quarter turn into m904
typedef unsigned int u32;
struct Obj { char pad[0x3e8]; u32 m3e8; char p2[0x900 - 0x3ec]; u32 m900; u32 m904; void f(); };
void Obj::f() { m3e8 = 0; m904 = (m900 + 0x20000000) & 0xC0000000; }
