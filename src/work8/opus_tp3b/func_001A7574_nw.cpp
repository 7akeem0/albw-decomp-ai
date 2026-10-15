typedef unsigned char u8;
typedef unsigned int u32;
typedef short s16;

extern "C" void func_0065650C(void*, int) ;

void func_001A7574(u8* self) {
    if (*(u8*)(*(u32*)(self + 0x510) + 4) != 0) return;
    u8* p = self + 0x8bc;
    s16 v = *(s16*)(self + 0x508);
    if (v <= 0) {
        func_0065650C(p, 8);
        return;
    }
    if (self[0x939] == 0) {
        func_0065650C(p, 0);
        return;
    }
    self[0x939] = 0;
    func_0065650C(p, 4);
}
