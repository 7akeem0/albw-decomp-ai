#pragma O2
#pragma Otime


typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
struct T { u8 p0[0x2e]; s16 h2e; u8 p1[0x4bd - 0x30]; u8 b4bd;
           u8 p2[0x4c0 - 0x4be]; u8 sub4c0[0x50C - 0x4c0]; u32 m510;
           u8 p3[0x51A - 0x514]; u8 b517; };
extern "C" void func_006657B4(void*, int);
static inline void flags(T*self,u8 zero,u8 one){self->b4bd=zero;self->b517=one;}
void f(T* self) {
  if (!self->b4bd) return;
  func_006657B4(self->sub4c0,6);flags(self,0,1);
  if (4 != self->h2e && 6 != self->h2e) self->m510 = 0;
}
