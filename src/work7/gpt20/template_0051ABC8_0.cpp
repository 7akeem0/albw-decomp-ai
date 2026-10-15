typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_51ABC8;
struct S1_51ABC8;
struct S1_51ABC8 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void target(u32); };
struct S0_51ABC8 { char pad20[0x20]; S1_51ABC8* m20; };
void f_0051ABC8(S0_51ABC8* p,u32 a0){if(p->m20)p->m20->target(a0);}
