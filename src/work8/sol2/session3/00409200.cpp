typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef unsigned int u32; typedef int s32; typedef short s16; typedef float f32;

struct P { f32 a[12]; f32 gap[3]; f32 b[3]; char gap2[0x18]; u8 flag; };
static inline void init(P*p,u8 one){ p->a[11]=0.0f;p->a[10]=0.0f;p->a[9]=0.0f;p->a[8]=0.0f;p->a[7]=0.0f;p->a[6]=0.0f;p->a[5]=0.0f; p->a[4]=0.0f;p->a[3]=0.0f;p->a[2]=0.0f;p->a[1]=0.0f;p->a[0]=0.0f; p->b[0]=0.0f;p->b[1]=0.0f;p->b[2]=0.0f; p->flag=one; }
void f(P*p){init(p,1);}