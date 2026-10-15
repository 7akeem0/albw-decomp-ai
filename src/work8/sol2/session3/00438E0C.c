typedef unsigned char u8;typedef signed char s8;typedef unsigned int u32;
struct Child{u8 pad[13];s8 state;u8 pending;};struct S{u8 pad[0x1a4];struct Child*a,*b,*c;u32 m1b0;int m1b4;};extern int FUN_001b6ce4(void);extern void FUN_0012c718(struct Child*);extern int FUN_00532c78(void*);
static inline int busy(struct Child*p){return p->state!=0||p->pending!=0;}
static inline void finish(struct Child*p){if(p->state==3&&p->pending==3)FUN_0012c718(p);}
u32 FUN_00438e0c(struct S*s,u32 a,u32 b){u32 r=FUN_001b6ce4();if(s->m1b4==-1){if(busy(s->a)){finish(s->a);r=0;}if(busy(s->a)){finish(s->b);r=0;}if(busy(s->a)){finish(s->c);r=0;}if(FUN_00532c78((u8*)s+0x98)||FUN_00532c78((u8*)s+0xa4)||FUN_00532c78((u8*)s+0xb0))r=0;}return r;}
