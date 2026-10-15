typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;

u8* func_0026ED38();
u8* func_004956E0(u8* p);
void func_003E22CC(u8* p);

struct Blk7f8 { float a; float b; u8 c; u8 pad[3]; };

u8* func_00388254() {
    u8* o = func_0026ED38();
    *(u32*)o = 0x6e632c;
    u8* y = func_004956E0(o + 0x528);
    u8* r4 = y - 0x400;
    Blk7f8* p = (Blk7f8*)(y + 0x2d0);
    p->a = 5.0f;
    p->b = 1.0f;
    r4 -= 0x128;
    p->c = 0;
    float* q = (float*)(r4 + 0x800); __schedule_barrier();
    q[1] = 1.0f;
    q[2] = 1000.0f;
    func_003E22CC(r4 + 0x528);
    return r4;
}
