typedef unsigned int u32;
typedef unsigned char u8;

extern "C" void func_00490A18(u8* p, u32 v);
extern "C" void func_00499EF4(u8* p, u32 k, u32 v);

extern "C" void func_00499E80(u8* self, u32 k, u32 v) {
    switch (k) {
    case 11:
        func_00499EF4(self, 5, v);
        return;
    case 12:
        func_00499EF4(self, 6, v);
        return;
    case 13:
        func_00499EF4(self, 7, v);
        return;
    case 14:
        func_00490A18(self + 0x3e4, v);
        return;
    case 15:
        func_00490A18(self + 0x434, v);
        return;
    case 16:
        func_00490A18(self + 0x484, v);
        return;
    default:
        func_00499EF4(self, k, v);
        return;
    }
}
