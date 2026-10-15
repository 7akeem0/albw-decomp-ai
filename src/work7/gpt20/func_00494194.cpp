#include "ladder_types.h"
struct O4941 {u32 pad0;void* data;u32 count;};
extern "C" void func_0049417C(void*);
extern "C" void func_0011F054(void*(*)(u32),void(*)(void*));
extern "C" void func_0011F168(void*);
extern "C" void func_00494194(O4941*p){
    func_0011F054(0,func_0049417C);
    func_0011F168(p->data);
    p->data=0;p->count=0;
    func_0011F054(0,0);
}
