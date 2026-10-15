#include "range.h"
extern Context14FC* data_0070BB18;
extern "C" void func_0026F4EC(void*,s32,const Vec3*);
extern "C" void func_0014FC2C(const Vec3* p,s32 mode){
    void** target=&data_0070BB18->target;
    switch(mode){
    case 0:func_0026F4EC(*target,0,p);break;
    case 1:func_0026F4EC(*target,1,p);break;
    }
}
