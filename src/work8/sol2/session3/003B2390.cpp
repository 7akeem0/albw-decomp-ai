

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
struct T2390 { u8 pad[0x48]; u8* m48; };
extern "C" void func_003842C0(void*, u32, u32, u32);
static void issue(u8* x,u32 n,u32 k,u32 flag){func_003842C0(x+0x8c0,n,k,flag);}
void f(T2390* self) {
  issue(self->m48,0x58,0xa,1);
  f32 z = 0.0f;
  u8* p = self->m48 + 0xa2c;
  *(f32*)(p + 0) = z;
  *(f32*)(p + 4) = z;
  *(f32*)(p + 8) = z;
  u8 one = 1;
  self->m48[0xb3f] = one;
}
