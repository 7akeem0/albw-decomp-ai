

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
struct Pair384 { u32 a, b; };
struct TC384 { u8 pad[0x3dc]; f32 f3dc, f3e0, f3e4; u32 m3e8; u8 pad2[0xc3c-0x3ec]; Pair384 pair; u8 pad3[0xc74-0xc44]; u32 mC74; u8 pad4[0xc84-0xc78]; u32 mC84; u8 pad5[0xc93-0xc88]; u8 bC93; };
extern "C" void func_004FC07C(TC384*,u32,u32,u32);
template<class T0, class T1> inline void hlp0(T0 p, T1 self) { p.b = self->m3e8;
  self->pair = p; }
void f(TC384* self) {
  u32 z = 0;
  self->bC93 = 0;
  self->f3dc = 0.0f;
  self->f3e0 = 0.0f;
  self->f3e4 = 0.0f;
  Pair384 p;
  p.a = z; 
  hlp0(p, self);
  self->mC74 = z;
  func_004FC07C(self,0xc,0x10,0);
  self->mC84 = 0xc;
}
