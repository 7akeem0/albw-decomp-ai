typedef unsigned int u32;typedef unsigned short u16;typedef unsigned char u8;
struct PX{char p[0xd];u8 m0D;u8 m0E;};struct PA{char p[0x74];u8 m74;};
struct O{char p[0x54];PX* m54;u16 m58;char p2[0xd6];PA* m130;};
bool f(O*o){PA*p=o->m130;if(p){if(p->m74&4)goto fail;PX*q=o->m54;if(q&&(q->m0D!=0||q->m0E!=0)&&o->m58==0)goto fail;}return true;fail:return false;}
