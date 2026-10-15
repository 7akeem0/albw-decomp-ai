// 0x255CD8: consume n (int) from the u8 counter at +0xFA if enough is left (signed int compare)
typedef unsigned char u8; typedef int s32;
struct S255C { u8 pad[0xfa]; u8 mfa; bool consume(s32 n); };
bool S255C::consume(s32 n) { if (mfa >= n) { mfa -= n; return true; } return false; }
