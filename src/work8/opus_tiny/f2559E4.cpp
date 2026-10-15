// 0x2559E4: consume n from the u8 counter at +0xFD if enough is left (unsigned compare)
typedef unsigned char u8;
struct S2559 { u8 pad[0xfd]; u8 mfd; bool consume(u8 n); };
bool S2559::consume(u8 n) { if (mfd >= n) { mfd -= n; return true; } return false; }
