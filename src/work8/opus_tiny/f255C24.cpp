// 0x255C24: consume n (int) from the u8 counter at +0xf9 if enough is left (signed int compare)
typedef unsigned char u8; typedef int s32;
struct S255C24 { u8 pad[0xf9]; u8 mf9; bool consume(s32 n); };
bool S255C24::consume(s32 n) { if (mf9 >= n) { mf9 -= n; return true; } return false; }
