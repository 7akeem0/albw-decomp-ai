

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
extern "C" void func_0014E2A0(void*, u32, void*, u32, void*, u32);
void f(u8* self) {
  if (*(u8*)(self + 0x410) == 2 || *(s8*)(self + 0x508) == 0) return;
  func_0014E2A0(self, *(u32*)(self + 0x434), self + 0x4b4, 0x1f00, self + 0x4a4, 0);
}
