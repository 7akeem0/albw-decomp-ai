// 0x255D04: consume n (int) from the u8 counter at +0xfb if enough is left (signed int compare)
typedef unsigned char u8; typedef int s32;
struct S255D04 { u8 pad[0xfb]; u8 mfb; bool consume(s32 n); };
bool S255D04::consume(s32 n) { if (mfb >= n) { mfb -= n; return true; } return false; }
