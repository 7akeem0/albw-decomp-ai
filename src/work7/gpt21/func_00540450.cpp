#include "range.h"
extern void*data_00711F50;extern s32 func_00587FCC(void*,const void*);extern bool func_00540488(void*,s32);bool f_540450(void*p,const void*name){s32 id=func_00587FCC(data_00711F50,name);if(id==-1)return false;return func_00540488(p,id);}
