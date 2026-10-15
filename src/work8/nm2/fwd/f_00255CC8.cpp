typedef unsigned char u8;struct Holder{u8 pad[0x10];u8* p;};
extern "C" void g_H(void*);
void f_255CC8(Holder* p){ g_H(p->p+0x40c); }


