

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
extern u8 data_00714A40[];
extern u8 data_007A06A0[];
extern u8 data_007A06F0[];
extern u8 ro_1FF81000[];
extern "C" void func_003DD5A0();
extern "C" void func_003DCBF8(void*,s8);
extern "C" void func_003DE7C8(void*);
void f() {
  u8* g = data_00714A40;
  if (((s8)g[1] | (s8)g[3]) != 0) return;
  if (0 != g[5]) func_003DD5A0();
  s8 v = *(s8*)(ro_1FF81000 + 0xc0);
  g[4] = (u8)v;
  func_003DCBF8(data_007A06A0,v);
  func_003DE7C8(data_007A06F0);
  g[5] = 1;
}
