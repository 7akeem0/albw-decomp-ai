

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
struct T { u8 p0[0xb0]; u32 mc; s8 idx; u8 p1[0xc0 - 0xb5];
           u32 mf; void* mo; PMF* me; PMF* mt; };
extern "C" void func_00352210(void*, u32, f32);
extern "C" bool func_0051B0B4(void*);
extern "C" void func_0012C790(T*);
extern "C" void func_001B6B38(T*);
extern void* data_007142C8;
void f(T* self) {
  (((Base*)self->mo)->*self->mt[self->idx])();
u32 c=self->mc;u32 mf=self->mf;++c;self->mc=c;if(mf)func_00352210((void*)mf,1,(f32)c);
  if (!func_0051B0B4(data_007142C8)) { func_0012C790(self); func_001B6B38(self); }
}
