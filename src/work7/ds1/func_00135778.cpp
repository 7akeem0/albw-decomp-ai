// 0x135778: state gate with a dispatch to func_00291E20.
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef int s32;

extern void* data_0070FB60;
extern "C" void func_0034C8F0(void*, u32, void*);
extern "C" void func_00291E20(void*, u32);

u32 f(void* self, void* a1) {
    if (*(u8*)((u8*)self + 0x604) == 0) {
        func_0034C8F0((u8*)self + 0x40c, *(u32*)((u8*)self + 0x3a0), a1);
        void* p = *(void**)((u8*)a1 + 0x2c);
        if (p != 0) {
            s8 v = *(s8*)((u8*)p + 1);
            if (v == 5 || v == 8) {
                if ((*(u32*)((u8*)self + 0x444) & 0xc000000u) == 0x4000000u) {
                    *(u8*)((u8*)self + 0x604) = 3;
                } else {
                    u32 m = *(u16*)((u8*)(*(void**)((u8*)self + 0x46c)) + 0x30);
                    func_00291E20(data_0070FB60, (u32)(-(s32)m));
                }
            }
        }
    }
    return 0;
}
