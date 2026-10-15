typedef unsigned int u32;typedef int s32;typedef unsigned char u8;typedef signed char s8;typedef float f32;
extern "C" void func_00409BC8(void*,void*);
extern "C" void func_0040ECC8(void*,void*,void*,f32);
extern "C" void func_00409B8C(void*);
void func_00258038(void* s,void* a,void* b,f32 ff){void* tmp;func_00409BC8(&tmp,(char*)s+0xc);if(tmp){void* x=a;void* y=b;func_0040ECC8(tmp,x,y,ff);}func_00409B8C(&tmp);}
