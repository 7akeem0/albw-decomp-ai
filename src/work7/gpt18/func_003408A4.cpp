#include "range.h"
struct Sub{char pad[0xf4];float f;u32 n;void set(float x,u32 y);};struct Obj{char pad[0x400];Sub sub;};
void func_003408A4(Obj* p,float f,u32 n){Sub* q=&p->sub;q->n=n;q->f=f;}