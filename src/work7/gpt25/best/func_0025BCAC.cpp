#include "../range_types.h"
namespace sead{struct SafeString;}
extern "C" void*data_00711F50;
extern "C" s32 func_00587FCC(void*,const sead::SafeString&);
extern "C" void func_0025BCE8(void*,s32,s32);
void func_0025BCAC(void*p,const sead::SafeString&name,s32 n){s32 id=func_00587FCC(data_00711F50,name);if(id!=-1)func_0025BCE8(p,id,n);}
