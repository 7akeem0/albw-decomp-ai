#include "range_types.h"
extern void* data_00711F50;
extern "C" void func_00297298(void*,s32);
extern "C" void f_00321800(void*,s32 n) {
    if (n>=0) func_00297298(data_00711F50,n);
}
