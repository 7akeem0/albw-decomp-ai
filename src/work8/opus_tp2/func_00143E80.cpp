

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
struct Base { virtual void v(); };
typedef void (Base::*PMF)();
struct Sub { u32 mc; s8 idx; u8 p[0x10 - 5]; u32 mf; void* mo;
             u8 p2[0x1c - 0x18]; PMF* mt; };
struct T { u8 p0[0x424]; Sub sub; };
extern "C" void func_00352210(void*, u32, f32);
void f(T* self) {
  Sub* s; __schedule_barrier();
  s = &self->sub;
  (((Base*)s->mo)->*s->mt[s->idx])();
  u32 c = ++s->mc;
  u32 c_c6 = c;
  if (s->mf) func_00352210((void*)s->mf, 1, (f32)c_c6);
}
