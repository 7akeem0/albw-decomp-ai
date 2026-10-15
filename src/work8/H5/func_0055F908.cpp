typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;

struct Inner {
    u8 pad0[0x16];
    u16 m16;
};

struct Self {
    u8 pad0[0x14];
    Inner* m14;
    u8 pad1[0x144 - 0x18];
    u8 m144;
};

extern "C" u32 func_0055F908(Self* self) {
    u8 mode = self->m144;
    u32 f = self->m14->m16;
    if (mode == 0) {
        if (f & 2) return 1;
        if (f & 4) return 1;
        return 0;
    }
    if (mode == 1) {
        if ((f & 2) == 0) return 1;
        if (f & 4) return 1;
        return 0;
    }
    if (f & 4) return 0;
    return 1;
}
