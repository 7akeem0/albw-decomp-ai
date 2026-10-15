#include "range.h"
struct SoundOwner;struct SoundObject;struct SafeString;
extern void*data_00711F50;extern s32 func_00587FCC(void*,const SafeString&);extern SoundObject*func_00293DC0(SoundOwner*,s32,s32);
SoundObject*f_00293D10(SoundOwner*p,const SafeString&name){s32 id=func_00587FCC(data_00711F50,name);if(id==-1)return 0;return func_00293DC0(p,id,0);}
