#include "range.h"
typedef u32 (*Callback4966)(u32,u32,u32,u32);
extern void* data_00714FC0;
extern u32 func_0049663C(u32,u32,u32,u32);
extern u32 func_00496074(u32,u32,u32,u32);
extern s32 func_006006B0(Callback4966,Callback4966);
bool f_004966A4(void* owner) {
    data_00714FC0=owner;
    return func_006006B0(func_0049663C,func_00496074)!=0;
}
