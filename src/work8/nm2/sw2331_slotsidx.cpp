typedef unsigned char u8;typedef unsigned int u32;
struct Element2331{char b[0x5c1c];};
struct Slots{Element2331 a[2];};
struct O{u8 pad[0x10];Slots s;u8 index;};
extern "C" void func_001B7D64(Element2331*,void*,void*);
void f2331F0(O*p,void*a,void*b){Slots* s=&p->s;u32 i=p->index;func_001B7D64(&s->a[i],a,b);}
