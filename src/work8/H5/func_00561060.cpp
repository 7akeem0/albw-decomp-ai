typedef unsigned char u8;
typedef unsigned int u32;

struct Buf {
    u32 w;
    u8 b4;
    u8 pad[3];
};

extern "C" u32 func_005611C0(void* a, Buf* b);

extern "C" u32 func_00561060(void* a, u8* out) {
    Buf b;
    u32 r = func_005611C0(a, &b);
    if (r == 0) {
        return 0;
    }
    if (b.b4 != 0xd0) {
        return 0;
    }
    *out = (u8)(b.w != 0);
    return 1;
}
