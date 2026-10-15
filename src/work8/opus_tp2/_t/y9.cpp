#include "../../../work7/gpt29/range.h"
extern void* data_00711F50;
extern s32 func_00587FCC(void*,const SafeString5532&);
extern bool func_00293DC0(void*,s32,s32);
static inline bool play(void*p,s32 id){u8 b=*((u8*)p+0x1a4);s32 z=0;if(!b)return b;return func_00293DC0(p,id,z);}
bool f_00296D28(void* p,const SafeString5532& name){s32 id=func_00587FCC(data_00711F50,name);if(id==-1)return false;return play(p,id);}
