

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
struct TF42C {
u8 pad[0x44];
u32 m44;
u8 pad2[0x6a-0x48];
s8 b6a;
u8 b6b;
u8 b6c;
u8 b6d;
};
extern "C" void func_0032AA6C(u32, s8);
extern "C" void func_00328E30(u32, s8, u32);
void f(TF42C* self, u32 a1) {
  s8 v = self->b6a;
  self->b6c = 0;

  self->m44 = (v != 0) ? 0x2aaaaaaau : 0xaaaaaaaau;
  if (self->b6d != 0) {
    self->b6d = 0;
    func_0032AA6C(a1, v);
  }
  func_00328E30(a1, self->b6a, 0);
}
