typedef unsigned int u32;
typedef int s32;
typedef unsigned char u8;

struct Out {
    u32 m0;
    u8 m4;
};
struct Blob {
    u32 hdr;
};
struct Holder {
    Blob* m0;
};

extern "C" u32 func_00560D98(Holder* h, Out* out, s32 idx) {
    if (idx < 0 || idx >= (s32)(h->m0->hdr >> 8)) {
        return 0;
    } else {
        u8* bytes = (u8*)h->m0 + 4;
        out->m4 = bytes[idx];
        u32 count = h->m0->hdr >> 8;
        u32* words = (u32*)((u8*)h->m0 + 4 + ((count + 3) & ~3u));
        out->m0 = words[idx];
        return 1;
    }
}
