typedef unsigned int u32;typedef unsigned char u8;
struct Inner{char p[0x70];void* m70;};struct X{char p[0x14];Inner* m14;};struct G{char p[0x44];void* m44;};struct Leaf{char p[0x7c];u8 m7C;};
extern G* data_0070B728;
bool f(X*o){void* w=o->m14->m70;Leaf*p=(Leaf*)w;if(data_0070B728->m44&&data_0070B728->m44==w){return p->m7C==1;}return false;}