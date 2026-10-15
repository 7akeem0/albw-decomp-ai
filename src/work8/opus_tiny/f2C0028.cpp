// 0x2C0028: three-way compare of the s8 at +0x14 (sort callback)
typedef signed char s8; typedef int s32;
struct E2C0 { char pad[0x14]; s8 key; };
s32 func_002C0028(const E2C0* a, const E2C0* b) { s32 x = a->key, y = b->key; if (x < y) return -1; if (x > y) return 1; return 0; }
