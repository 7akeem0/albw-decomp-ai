typedef unsigned int u32;typedef unsigned short u16;typedef unsigned char u8;
struct P{char p[0xd];u8 m0D;u8 m0E;};
struct O{char p[0x70];P* m70;u16 m74;};
bool func_0058E15C(O* o){if(o->m70&&(o->m70->m0D!=0||o->m70->m0E!=0))return o->m74==0;return false;}

