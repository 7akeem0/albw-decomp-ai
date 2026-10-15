typedef unsigned int u32;
typedef unsigned short u16;
typedef short s16;
typedef unsigned char u8;

struct Q {
    u8 pad0[0xcc];
    u8 bcc;
    u8 pad1[0x1b0 - 0xcd];
    s16 s1b0;
};

struct Self {
    u8 pad0[0x54];
    Q* m54;
    u16 h58;
    u8 pad1[0x80 - 0x5a];
    void* m80;
};

extern "C" u32 func_00573824(void* p);

extern "C" u32 func_0058D954(Self* self) {
    void* p = self->m80;
    if (p == 0) goto ret0;
    if (func_00573824(p) == 0) goto ret0;
    if (self->h58 != 2) goto ret0;
    {
        Q* q = self->m54;
        if (q == 0) goto ret0;
        if (q->bcc != 4) goto ret0;
        if (q->s1b0 < 0) return 1;
    }
ret0:
    return 0;
}
