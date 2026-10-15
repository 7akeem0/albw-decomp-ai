// 0x68A3CC: three-way compare of the s16 at +4 (sort callback)
typedef short s16; typedef int s32;
struct E68A { char pad[4]; s16 key; };
s32 func_0068A3CC(const E68A* a, const E68A* b) { s32 x = a->key, y = b->key; if (x < y) return -1; if (x > y) return 1; return 0; }
