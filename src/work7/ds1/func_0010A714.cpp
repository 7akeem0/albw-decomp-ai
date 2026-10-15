typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;

extern "C" void* func_0010BAB4(u32, void*);

u8* func_0010A714(u8* self) {
    void* tag;
    u32 z = 0;
    s32 neg = -1;
    *(u32*)(self) = z;
    *(s32*)(self + 4) = z;
    *(s32*)(self + 8) = neg;
    self[0xc] = 0;
    self[0xd] = 0;
    void* q0 = func_0010BAB4(0x14, tag);
    if (q0 != 0) {
        *(u32*)((u8*)q0 + 0) = 0;
        *(u32*)((u8*)q0 + 4) = 0;
        *(u32*)((u8*)q0 + 8) = 0;
        *(u32*)((u8*)q0 + 0xc) = 0;
    }
    *(void**)self = q0;
    void* q1 = func_0010BAB4(0x14, tag);
    if (q1 != 0) {
        *(u32*)((u8*)q1 + 0) = 0;
        *(u32*)((u8*)q1 + 4) = 0;
        *(u32*)((u8*)q1 + 8) = 0;
        *(u32*)((u8*)q1 + 0xc) = 0;
    }
    *(void**)(self + 4) = q1;
    return self;
}
