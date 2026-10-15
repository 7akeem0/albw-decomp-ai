#include "range.h"
extern void*data_00711F50;
extern s32 func_00587FCC(void*,const SafeString24&);
extern void*func_00199C7C(void*,s32,void*,void*,u32*);
extern "C" void*target(void*p,const SafeString24&name,void*handle){s32 id=func_00587FCC(data_00711F50,name);if(id==-1)return 0;return func_00199C7C(p,id,handle,0,0);}
