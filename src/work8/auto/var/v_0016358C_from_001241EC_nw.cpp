typedef unsigned char u8;
typedef unsigned int u32;
typedef short s16;

extern "C" void func_0065650C(void*, int) ;

void func_001241EC(u8* self) {
    if (*(u8*)(*(u32*)(self + 0x510) + 4) != 0) return;
    u8* p = self + 0x8bc;
    s16 v = *(s16*)(self + 0x508);
    if (v <= 0) {
        func_0065650C(p, 12);
        return;
    }
    if (self[0x920] == 0) {
        func_0065650C(p, 7);
        return;
    }
    func_0065650C(p, 2);
}
