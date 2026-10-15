#include "../../range.h"
struct S{virtual void v();char*buffer;s32 capacity;};extern s32 func_0010013C(char*,u32,const char*,void*);s32 func_00111A20(S*p,const char*format,void*args){char*buf=p->buffer;s32 capacity=p->capacity;s32 r=func_0010013C(buf,capacity,format,args);if(r<0||r>=capacity){buf[capacity-1]=0;r=capacity-1;}return r;}
