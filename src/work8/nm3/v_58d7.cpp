typedef unsigned int u32;typedef unsigned char u8;typedef unsigned short u16;
struct P{char p[0xd];u8 m0D;u8 m0E;char p2[0x6d];u8 m7C;};
struct O{char p[0x54];P* m54;u16 m58;};
bool f(O*o){if(o->m58==3&&o->m54&&(o->m54->m0D||o->m54->m0E))return o->m54->m7C==0;return false;}