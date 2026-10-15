typedef unsigned int u32;typedef int s32;typedef unsigned char u8;typedef signed char s8;typedef float f32;
struct V{virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void vf();};
struct Obj{char p[0x44];V* m44;};
extern "C" void func_004CDB2C(void*,void*);
void func_004CD668(Obj* s,void* p){func_004CDB2C(s,p);V* q=s->m44;if(q&&q==p){q->vf();s->m44=0;}}
