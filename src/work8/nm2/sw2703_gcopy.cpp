typedef unsigned char u8;typedef int s32;typedef unsigned int u32;
struct Child{u8 pad[0x36];u8 active;};
struct Obj{u8 pad[0x1c];Child*child,*cache;};
extern void func_002707A4(Obj*,s32);
void start(Obj*p,s32 n){func_002707A4(p,n);}
void f_00270300(Obj*p,bool gate,s32 frames){bool g=gate;Child*c=p->child;if(c&&(!g||c->active)){if(frames<0)frames=30;p->cache=c;start(p,frames);}}
