

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
struct Inner098 { u8 pad[1]; u8 b1; };
struct U098 { u8 pad[0x2c]; Inner098* m2c; };
extern void* data_0070FB60;
extern "C" void func_002917A4(void*, void*, u32, f32);
static inline void sol1ctx_0(void* const& a0,void* const& a1,u32 const& a2,f32 const& a3){func_002917A4(a0,a1,a2,a3);}

u32 f(u8* self, U098* a1) {
  Inner098* p = a1->m2c;
  if (p == 0) return 0;
  if (*(s16*)(self + 0x440) > 0) return 0;
  if (p->b1 != 5) return 0;
  f32 rate = 0.2f;
  sol1ctx_0(data_0070FB60, self + 0x3d0, 0, rate);
  *(s16*)(self + 0x440) = 0x1e;
  return 1;
}
