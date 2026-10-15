typedef unsigned char u8;
typedef int s32;
extern void func_004CF478(void* p, s32 a, s32 b);
extern s32 func_00151148(void* q, s32 a);
typedef struct Self { u8 pad[0x2d7]; u8 m2D7; u8 pad2d8[0x40c - 0x2d8]; void* m40C; void* m410; } Self;
s32 func_001CCFF4(Self* self)
{
    s32 r;
    func_004CF478(self->m40C, 0, 0);
    r = func_00151148(self->m410, 0);
    self->m2D7 = 1;
    return r;
}
