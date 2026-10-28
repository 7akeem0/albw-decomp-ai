

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
struct T {
  u8 b0, b1;
  u16 pad2;
  u32 m4;
  f32 f8, fc, f10;
  u32 m14;
  u8 b18;
  u8 pad19[3];
  f32 f1c;
  u8 b20;
};
template<class T0> inline void hlp0(T0 self) { self->fc = 1.0f;
  self->f10 = 0.0f;
  self->m14 = 0; }
T* f(T* self) {
  self->b0 = 0;
  self->m4 = 0;
  self->f8 = 0.0f;
  hlp0(self);
   self->b18 = 0;
  self->b1 = 0;
  self->f1c = -99999.0f;
  self->b20 = 0;
  return self;
}
