// 0x58FB74: ARMCC-generated out-of-line helper __ARM_common_memcpy4_5 (4-aligned 5-byte block copy).
// Any 4-aligned 5-byte copy in the TU makes ARMCC emit it; check picks the helper (use --sym memcpy4).
typedef unsigned int u32;
extern "C" void* memcpy(void*, const void*, unsigned);
void copy5(u32* d, const u32* s) { memcpy(d, s, 5); }
