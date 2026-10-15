typedef unsigned int u32;
typedef float f32;

struct Sub {
char p0[0x1800 + 0x3c - 0x10];
};
struct Obj {
char p0[0x38];
Sub* m38;
};

extern "C" f32 func_00581B58(Obj* self, u32 a, u32 b) {
    const Sub* s = self->m38;
    if (!s) return 0.0f;
    char* base = (char*)s + 0x1800 + 0x3c;
    u32 k = 0x143;
    char* pa = base + ((a * k) << 2);
if (s) { __schedule_barrier(); } else { __schedule_barrier(); }
    f32 x = *(f32*)(pa + 0x3c8);
    char* pb = base + ((b * k) << 2);
    f32 y = *(f32*)(pb + 0x3c8);
    return x - y;
}
