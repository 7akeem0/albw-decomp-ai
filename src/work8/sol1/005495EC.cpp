typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

extern "C" u32 func_00532984(void* self);

struct Self {
    u8 pad0[0x108];
    u32 m108;
};

struct Other {
    u8 pad0[0x2cc];
    u32 m2cc;
    u8 pad1[0x2e0 - 0x2d0];
    u32 m2e0;
};

extern "C" s32 func_005495EC(Self* self, Other* o) {
    Self* s = self;
    Other* p = o;
    if (func_00532984(s) != 0) {
        return 1;
    }
    u32 v = s->m108;
    if (v != 0) {
        u32 rhs=p->m2cc; if(v==rhs) {
            return 1;
        }
    }
    if ((p->m2e0 & 4) != 0) {
        return 1;
    }
    return 0;
}
