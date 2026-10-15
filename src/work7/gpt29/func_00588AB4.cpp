#include "range.h"
extern SoundObject29*func_0025BE98(void*,u32);extern void func_0025B6A8(SoundHandle29*,SoundObject29*);
bool f_588AB4(SoundOwner29*p,u32 id,SoundHandle29*out){SoundObject29*s=func_0025BE98(p->child,id);if(!s)return false;if(out)func_0025B6A8(out,s);return true;}
