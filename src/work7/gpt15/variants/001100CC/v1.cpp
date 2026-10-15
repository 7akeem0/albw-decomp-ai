#include "../../range.h"
struct Request{u32 a,b;const void*input;s32 length;u8 flag;};extern "C" void func_00110AEC(Request*);extern "C" void func_00110988(void*,void*,Request*);extern "C" void func_001100CC(void*p,void*q,const void*input){Request request;request.a=0;request.b=0;request.flag=0;request.length=-1;request.input=input;func_00110AEC(&request);func_00110988(p,q,&request);}
