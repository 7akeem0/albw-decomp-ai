typedef unsigned int u32;
typedef unsigned char u8;

struct Loc5610A8 {
    u32 w0;
    u8 b4;
    u8 p[7];
};
struct Pair5610A8 {
    u32 lo;
    u32 hi;
};
struct Obj5610A8 {
    u32 m0;
};

bool func_005611C0(Obj5610A8* self, Loc5610A8* l);

extern "C" bool func_005610A8(Obj5610A8* self, Pair5610A8* out) {
    Loc5610A8 l;
    u32 lo, hi;
    if (func_005611C0(self, &l)) {
        u8 c = l.b4;
        if (c == 0xc0 || c == 0xc1) {
            __schedule_barrier(); lo = self->m0;
            hi = l.w0 + self->m0;
        } else if (c == 0xff) {
            lo = self->m0;
            hi = 0;
        } else {
            lo = 0;
            hi = 0;
        }
    } else {
        lo = 0;
        hi = 0;
    }
    out->lo = lo;
    out->hi = hi; __schedule_barrier();
    return 0 != lo;
}
