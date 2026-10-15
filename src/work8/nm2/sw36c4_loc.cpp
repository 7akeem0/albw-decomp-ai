typedef unsigned int u32;
struct O{char pad[0xec];u32 flag;};
extern void* data_0070FB60;
extern void func_0036143C(void*);
void f(O*p){if(!p->flag){p->flag=1;void*g=data_0070FB60;if(g)func_0036143C(g);}}
