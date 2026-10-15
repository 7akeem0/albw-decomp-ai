#include "range_types.h"
extern void* data_00711F50;
extern "C" void func_004EC4FC(void*,s32,s32);
extern "C" void f_00321634(void*,s32 n) {
    func_004EC4FC(data_00711F50,n<0?0:n,1);
}
