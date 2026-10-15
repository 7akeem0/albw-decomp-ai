

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
extern u32 data_007A03B8[];
extern u32 data_007A03D8[];
u32 f(u32 a0, u32 a1, u32 a2) {
  for (s32 i = 0; i < 8; i++) {
    if (0 == data_007A03B8[i]) {
      data_007A03B8[i] = a0; __schedule_barrier();
      data_007A03D8[i] = a1; __schedule_barrier();
      u32*second=data_007A03D8+8;second[i] = a2;
      return 1;
    }
  }
  return 0;
}
