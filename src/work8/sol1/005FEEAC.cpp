typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;

typedef void* (*AllocFn)(u32 a, u32 b, u32 c, u32 d);
extern AllocFn data_00714820;

void*func_005FEEAC(){AllocFn f=data_00714820;u32*p;if(f){p=(u32*)f(0x10000,0x100,0,0x28);if(p==0)return p;for(s32 i=0;i<10;i++){p[i]=0;} return p;}return 0;}
