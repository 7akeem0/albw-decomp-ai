#include "range.h"
struct Request110 {u32 a,b;const void* input;s32 length;u8 flag;};
extern "C" void func_00110AEC(Request110*);
extern "C" void func_001108B0(void*,void*,Request110*);
extern "C" void func_00110080(void* p,void* output,const void* input){
    Request110 request;
    request.a=0;request.b=0;request.flag=0;request.length=-1;request.input=input;
    func_00110AEC(&request);
    func_001108B0(p,output,&request);
}
