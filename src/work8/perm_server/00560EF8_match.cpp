typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef unsigned long long u64;

struct Tmp {
    u32 w0;
    u8 kind;
    u8 pad1[3];
    u32 w8;
};
struct Obj { u32 m0; };
struct Pair64 { u32 lo; u32 hi; };

u32 func_00560FDC(Obj* self, Tmp* t);

bool func_00560EF8(Obj* self, Pair64* out) {
    Tmp t;
    u32 lo;
    u32 hi;
    if (func_00560FDC(self, &t) == 0) {
        lo = 0;
        hi = 0;
    } else if (t.kind == 0xc0 || t.kind == 0xc1) {
        __schedule_barrier(); lo = self->m0;
        hi = t.w0 + self->m0;
    } else if (t.kind == 0xff) {
        lo = self->m0;
        hi = 0;
    } else {
        lo = 0;
        hi = 0;
    }
    out->lo = lo;
    out->hi = hi; __schedule_barrier();
    return 0 != lo;
}
