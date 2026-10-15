

typedef unsigned char u8; typedef signed char s8;
typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
extern "C" void func_0010E3C4(void*, void*, u32);
struct Q {
    u8 pad0[0x1c];
    void* m1c;
    s32 m20;
};
struct G {
    u8* m0;
    s32 m4;
    s32 m8;
};
extern G data_00716238;
extern Q* data_00716270;
void f_003F6A20() {
    s32 c = 1 + data_00716238.m4;
    data_00716238.m4 = c;
    if (c != 8) return;
    u8* p = data_00716238.m0;
    Q* q = data_00716270;
    func_0010E3C4(p, q->m1c, q->m20 << 2);
    data_00716238.m0 = p + (q->m20 << 2);
    s32 a = data_00716238.m8;
    data_00716238.m8 = a + (data_00716238.m4);
    data_00716238.m4 = 0;
}
