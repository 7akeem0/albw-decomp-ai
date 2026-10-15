

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
extern u32 bss_007A03B8[8];
extern u32 bss_007A03D8[16];
s32 f(u32 v) {
  for (int i = 0; 8 > i; i++) {
    if (v == bss_007A03B8[i]) {
      bss_007A03B8[i] = 0; __schedule_barrier();
      bss_007A03D8[i] = 0;
      u32*second=bss_007A03D8+8;__schedule_barrier();second[i] = 0; __schedule_barrier();
      return 1;
    }
  }
  return 0;
}
