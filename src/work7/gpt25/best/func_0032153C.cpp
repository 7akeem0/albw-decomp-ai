#include "../range_types.h"
struct Mgr3215 { char pad[0x76]; u16 flag; void set(u16 value){flag=value;} };
extern Mgr3215* data_00711F50;
extern "C" void f_0032153C(void*,s32 n) {
    if(n>=0)data_00711F50->set(n!=0);
}
