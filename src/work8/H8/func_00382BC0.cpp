typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct Self { char pad0[0x34]; void* m34; void* m38; char pad3c; u8 m3d; };

void func_003AB994(Self* s, void* c);
void func_003AB8DC(Self* s, void* c);
u32 func_004CF478(void* c, s32 a, s32 b);
Self* func_00382C20(Self* s);

Self* func_00382BC0(Self* self) {
    func_003AB994(self, self->m34);
    if (self->m3d != 0) {
        func_003AB994(self, self->m38);
    } else {
        func_004CF478(self->m38, 0, 0);
    }
    func_003AB8DC(self, self->m34);
    func_003AB8DC(self, self->m38);
    return func_00382C20(self);
}
