

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
struct TEA58 { u8 pad[0x64]; u32 m64; u8 pad2[0x6a-0x68]; s8 b6a; u8 b6b; u8 b6c; u8 b6d; };
extern "C" void func_0036E490(TEA58*, u32, u32);
extern "C" void func_00328E30(u32, s8, u32);
void f(TEA58* self, u32 a1) {
  if (self->m64 != 0) { self->m64 = self->m64 - 1; return; }
  bool v = self->b6d;
  self->b6c = 1;
  if (v != 0) func_0036E490(self, 4, a1);
  func_00328E30(a1, self->b6a, 0);
}
