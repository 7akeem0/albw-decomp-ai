// 0x255B98: reset counter mF4 and set flag byte mF8
typedef unsigned int u32; typedef unsigned char u8;
struct S255B { u8 pad[0xf4]; u32 mf4; u8 mf8; void reset(); };
void S255B::reset() { mf4 = 0; mf8 = 1; }
