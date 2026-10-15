typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

extern "C" void* memset(void*, int, unsigned);

struct Sub { void* a; s32 b; char pad[0x10]; s32 c; };


void func_005FF938(char* self, u32 a1, u32 a2, s32 n, void* p) {
    char* o = self;
    void*q=p;
    u32 b1=a1;
    const s32 b2=a2;
    unsigned int m=n;
    if (!o) return;
    u32* z = (u32*)o;
    memset(z, 0, 0x44);
    (*(u32*)((char*)o + (0x2c))) = 0x300; __schedule_barrier();
    (*(u32*)((char*)o + (0xc))) = 0;
    (*(u32*)((char*)o + (8))) = b1;
    (*(u32*)((char*)o + (4))) = b2;
    (*(u32*)((char*)o + (0x20))) = 0;
    (*(u32*)((char*)o + (0x10))) = 0;
    (*(u32*)((char*)o + (0x28))) = 0;
    (*(u32*)((char*)o + (0x24))) = 0;
    (*(u32*)((char*)o + (0x34))) = 0; __schedule_barrier();
    Sub* s = (Sub*)(o + 0x18);
    s->a = q;
    s->b = m;
    s->c = 0;
    memset(q, 0, m * 28);
}
