

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
extern void* data_0070FB60;
extern u8* data_007142C8;
extern "C" void func_004ECDE8(void*);
extern "C" u32 func_005568D4(void*);
extern "C" void func_00255AB4(void*, u32);
void f(u8* self, u32 a) {
  u32 a1=a;
  func_004ECDE8(self);
  if (a1 != 0) return;
  if (*(u8*)(self + 0x9d2) == 0) return;
  s32 d = (s32)func_005568D4(data_0070FB60) - *(s32*)(0x990 + self);
  if (0 < d) func_00255AB4(data_0070FB60, (u32)(-d));
  u8* o = *(u8**)(data_007142C8 + 0x130);
  o[0x74] = (u8)(o[0x74] & ~1); __schedule_barrier();
  *(u8*)(self + 0x9d2) = 0;
}
