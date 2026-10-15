typedef unsigned char u8;
typedef unsigned int u32;

struct Self {
    u8 pad0[0x80];
    u32 m80;
};

extern u32 data_00712468[];

extern "C" void func_0043C3F4(u32 a);
extern "C" void func_0010E3C4(u32 a, void* b, u32 c);
static void ctx_0058E26C_1(u32 a0,void* a1,u32 a2){func_0010E3C4(a0,a1,a2);}


extern "C" void func_0058E26C(Self* self, u32 x) {
    u8* g = *(u8**)&data_00712468[0];
    if (g[0x25] != 0) {
        return;
    }
    if (self->m80 != 0) {
        func_0043C3F4(self->m80);
    }
    ctx_0058E26C_1(x, (u8*)self + 0x136, 0x200);
}
