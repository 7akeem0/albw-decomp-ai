

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
struct B782 { B782(); virtual void v0(); };
struct T782 : B782 {
  T782();
  u8 p0[0x28 - 4];
  u8* m28;
  u8 p1[0x70 - 0x2c];
  u32 m70, m74, m78;
  u8 b7c, b7d, b7e, b7f;
  u32 m80;
};
T782::T782() {
  m70 = *(u32*)(m28 + 0x650); __schedule_barrier();
  m74 = 0;
  m78 = 0;
  b7c = 0;
  b7d = 0;
  b7e = 0;
  b7f = 0;
  m80 = 0;
}
