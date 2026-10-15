// 0x58FBB8: ARMCC-generated out-of-line helper __ARM_common_memcpy4_6 (4-aligned 6-byte block copy),
// emitted for the struct assignment below. Check with --sym memcpy4.
typedef unsigned int u32; typedef unsigned short u16;
#pragma pack(1)
struct B6 { u32 a; u16 b; };
#pragma pack()
void copy6(B6* d, const B6* s) { *d = *s; }
