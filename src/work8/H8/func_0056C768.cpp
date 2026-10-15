typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct Ent { u32 key; void* val; };
struct Tbl { char pad0[0x218]; Ent e[9]; };
struct Counter { s32 v; Counter(s32 x) : v(x) {} operator s32() const { return v; } Counter& operator+=(s32 n) { v += n; return *this; } };

void* func_0056C768(Tbl* t, u32 key) {
    if (t->e[0].key == key) return t->e[0].val;
    for (Counter i(1); i < 9; i += 2) {
        if (t->e[i].key == key) return t->e[i].val;
        if (t->e[i + 1].key == key) return t->e[i + 1].val;
    }
    return 0;
}
