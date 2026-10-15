// 0x58FBCC: ARMCC-generated out-of-line helper __ARM_common_memcpy4_9 (4-aligned 9-byte block copy).
// Any 4-aligned 9-byte copy in the TU makes ARMCC emit it; check picks the helper (use --sym memcpy4).
typedef unsigned int u32;
extern "C" void* memcpy(void*, const void*, unsigned);
void copy9(u32* d, const u32* s) { memcpy(d, s, 9); }
