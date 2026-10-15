#include "range.h"
struct SoundOwner;struct SoundObject;struct SafeString;
extern void*data_00711F50;extern s32 func_00587FCC(void*,const SafeString&);extern SoundObject*func_0025BAE4(SoundOwner*,s32);
SoundObject*f_0025BAAC(SoundOwner*p,const SafeString&name){s32 id=func_00587FCC(data_00711F50,name);if(id==-1)return 0;return func_0025BAE4(p,id);}
