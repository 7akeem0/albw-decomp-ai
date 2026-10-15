typedef unsigned char u8;
typedef unsigned int u32;
typedef short s16;

extern "C" void func_00662638(void*, int) ;

void func_002B3BB8(u8* self) {
    if (*(u8*)(*(u32*)(self + 0x510) + 4) != 0) return;
    u8* p = self + 0x8ec;
    s16 v = *(s16*)(self + 0x508);
    if (v <= 0) {
        func_00662638(p, 7);
        return;
    }
    if (*(u32*)(self + 0x94c) >= *(u32*)(self + 0x950)) {
        func_00662638(p, 3);
        return;
    }
    if (self[0x985] != 0) {
        func_00662638(p, 0);
        return;
    }
    func_00662638(p, 2);
}
