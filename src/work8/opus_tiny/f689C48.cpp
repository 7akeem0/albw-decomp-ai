// 0x689C48: u32 three-way compare callback (qsort-style): -1 / 1 / 0
typedef unsigned int u32; typedef int s32;
s32 func_00689C48(const u32* a, const u32* b) { u32 x = *a, y = *b; if (x < y) return -1; if (x > y) return 1; return 0; }
