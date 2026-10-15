typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;

struct Tok {
    char pad0[8];
    u8 m8;
    char pad9[1];
    u16 ma;
};

struct Lex {
    char pad0[0xc];
    const u16* m0c;
    u32 m10;
    u32 m14;
};

u32 func_003D605C(Lex* self, Tok** out) {
    u32 cur = self->m10 + 1;
    u32 end = self->m14;
    self->m10 = cur;
    if (cur != end) {
        u16 c = self->m0c[cur];
        if ((u32)(c - 0x41) <= 0x1e) {
            (*out)->m8 = 0;
            (*out)->ma = (u16)(self->m0c[self->m10] - 0x40);
            self->m10 = self->m10 + 1;
            return 0;
        }
    }
    return 8;
}
