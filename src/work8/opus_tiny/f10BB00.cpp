// 0x10BB00: ARMCC-generated out-of-line helper __ARM_common_memcpy4_8 (4-aligned 8-byte block copy),
// emitted for the struct assignment below. Check with --sym memcpy4.
typedef unsigned int u32;
#pragma pack(1)
struct D8 { u32 a; u32 b; };
#pragma pack()
void copy8(D8* d, const D8* s) { *d = *s; }
