typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

extern "C" void* data_0070FB60;
extern "C" u8* data_00706E20;
extern "C" const u32 ro_006930D0;
extern "C" const u32 ro_00693984;
extern "C" u32 func_005568E8(void*);
extern "C" void* func_0052FBA0(void*, u32);
extern "C" s32 func_00588BE4(void*);

struct Param4F7BB8 {
    u8 pad0[0x28];
    u32 m28;
    void* m2c;
};
struct Self4F7BB8 {
    u8 pad0[0x3a0];
    u16* m3a0;
    u8 pad3a4[0x1fc];
    u32 m5a0;
};

bool func_004F7BB8(Self4F7BB8* self, Param4F7BB8* p) {
    u32 key = func_005568E8(data_0070FB60);
    u32 h = p->m28;
    u32 same = h == key;
    u32 flags = self->m5a0;
    if ((flags & 0x40000000) && same)
        return false;
    if ((s32)(flags & 0x80000000) < 0 && !same)
        return false;

    void* actor = func_0052FBA0(data_00706E20 + 0x3dbbc, h);
    if (actor) {
        s32 id = func_00588BE4(actor);
        if (id == ro_006930D0)
            return false;
        id = func_00588BE4(actor); 
        if (id == ro_00693984)
            return false;
    }

    if (!p->m2c)
        return false;
    s32 kind = ((s8*)p->m2c)[1];
    switch (kind) {
    case 1: case 5: case 6: case 8: case 0xb: case 0xc: case 0xf:
        return false;
    case 0x1f:
        return true;
    }

    if (!self->m3a0)
        return true;
    if ((u32)kind >= 0x13)
        return true;
    u8* entry = (u8*)self->m3a0 + 0xe;
    if ((u32)kind < 0x12)
        entry += kind * 2;
    u16 value = *(u16*)entry;
    return (value & 0xff) != 0;
}
