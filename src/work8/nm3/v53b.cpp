typedef int s32;typedef unsigned int u32;typedef signed char s8;
struct O{char p[0x10];u32 m10;u32 m14;char p2[0x50];s8 m68;};
bool f(O*o){s8 v=o->m68;if(v==4)return true;if(v==7||v==8){if(o->m10<o->m14)return false;return true;}return false;}

