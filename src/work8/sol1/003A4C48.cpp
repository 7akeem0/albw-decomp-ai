

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
extern u8* data_007142C8;
extern "C" void func_003A4E00(u8*);
extern "C" void func_0051B1D0(u8*, s8);
extern "C" void func_0030A370(u8*, u32, u32);
void f(u8* self, u32 a1, u32 a2) {
  func_003A4E00(self);
  if (data_007142C8 != 0) func_0051B1D0(data_007142C8, *(s8*)((u32)self + 0x145));
  func_0030A370(self, a1, a2);
}
