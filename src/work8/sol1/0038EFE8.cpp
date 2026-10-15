

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
struct Vec3 { f32 x, y, z; };
struct Base { virtual void v0(); u8 p1[0x30 - 4]; void* m30;
              u8 p2[0x70 - 0x34]; Base(); };
struct T : Base {
  u8 b70, b71, b72; u16 h74, h76, h78; f32 f7c, f80, f84;
  Vec3 v88; u32 m94; f32 f98, f9c, fa0;
  u8 ba4, ba5, ba6, padA7; u32 ma8; u8 padAC[4]; s32 mb0;
  u8 padB4[0xc0 - 0xb4]; f32 fc0, fc4, fc8;
  T();
};
T::T() {
  f32 zero=0.0f;
  b70 = 0; b71 = 0; b72 = 0;
  h74 = 0; __schedule_barrier(); h76 = 0; h78 = 0;
  f7c = zero; f80 = zero; f84 = zero;
  v88 = *(Vec3*)m30; __schedule_barrier();
  m94 = 0;
  f98 = zero; __schedule_barrier(); f9c = zero; fa0 = zero;
  ba4 = 0; ba5 = 0; ba6 = 0;
  ma8 = 0; __schedule_barrier();
  mb0 = -1;
  fc0 = zero; fc4 = zero; fc8 = zero;
}
