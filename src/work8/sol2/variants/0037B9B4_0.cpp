

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
struct T { u8 p0[0x48]; u32 mc; s8 idx; u8 p1[0x58 - 0x4d];
           u32 mf; void* mo; u8 p2[0x64 - 0x60]; PMF* mt;
           u8 p3[0x80 - 0x68]; u8 b80; };
extern "C" void func_00352210(void*, u32, f32);
extern "C" void func_0012C718(T*);
void f(T* self) {
  (((Base*)self->mo)->*self->mt[self->idx])();
u32 c=self->mc;u32 mf=self->mf;++c;self->mc=c;if(mf)func_00352210((void*)mf,1,(f32)c);
  if (1 == self->b80) func_0012C718(self);
}
