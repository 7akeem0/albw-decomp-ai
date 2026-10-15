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
extern u8 ro_006EFB60[];
extern "C" u32 func_0056130C(void*);
extern "C" void func_003C97C4(void*, u64);
static void issue(u32 a,u32 b,void* p){func_003C97C4(p,((u64)b<<32)|a);}
u8* f(u8* self) {
  *(u32*)self = (u32)ro_006EFB60;
  u32 b = *(u32*)(self + 0xc);
  u32 a = *(u32*)(self + 8);
  if ((a | b) != 0) {
    u32 v = func_0056130C(self);
    issue(a,b,&v);
    *(u32*)(self + 8) = 0;
    *(u32*)(self + 0xc) = 0;
  }
  *(u32*)(self + 4) = 0;
  return self;
}
