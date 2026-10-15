typedef unsigned char u8;typedef int s32;typedef unsigned int u32;typedef long long s64;
struct Config{u8 active,special;u8 pad2[0x16];s64 time;};
extern "C" Config data_00714998;
extern "C" s32 func_00102470();
extern "C" bool func_001023F8();
void func_00101300(){data_00714998.time=(s64)(func_00102470()*10);u8 one=1;if(func_001023F8())data_00714998.special=one;__schedule_barrier(); bool sp=data_00714998.special;if(sp||data_00714998.time!=0)data_00714998.active=1;}
