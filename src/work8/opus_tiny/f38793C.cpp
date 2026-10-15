// 0x38793C: vec_ctor element ctor of a packed 5-byte {s32 id; u8 flag} (array of 6 at +0x39 in 0x16D9C0).
// The flag clear lives in an out-of-line same-TU member that ARMCC inlines late, so the 0 is materialised
// after the -1 store (same register r1).
typedef int s32; typedef unsigned char u8;
#pragma pack(1)
struct Slot387 { s32 id; u8 flag; Slot387(); void clearFlag(); };
#pragma pack()
void Slot387::clearFlag() { flag = 0; }
Slot387::Slot387() : id(-1) { clearFlag(); }
