typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;
struct Handle { char pad[0x38]; s32 m38; };
class Stream {
public:
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1c();
    virtual bool isValid(Handle* h);
    virtual void v24(); virtual void v28(); virtual void v2c(); virtual void v30();
    virtual bool readImpl(u32* outRead, Handle* h, u8* dst, s32 size);
    bool read(u32* outRead, Handle* h, u8* dst, s32 size);
    char pad[0x4c - 4];
    bool mOpen;
};

bool Stream::read(u32* outRead, Handle* h, u8* dst, s32 size)
{
    if (!mOpen) return false;
    if (h == 0) return false;
    if (!isValid(h)) return false;
    if (dst == 0) return false;
    if (h->m38 == 0) return readImpl(outRead, h, dst, size);
    u32 total = 0;
    do {
        s32 chunk = h->m38;
        if (chunk > size) chunk = size;
        u32 got = 0;
        if (!readImpl(&got, h, dst, chunk)) {
            if (outRead) *outRead = total;
            return false;
        }
        total += got;
        if ((u32)chunk > got) break;
        size -= chunk;
        dst += got;
    } while (size != 0);
    if (outRead) *outRead = total;
    return true;
}
