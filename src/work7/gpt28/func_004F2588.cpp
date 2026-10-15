#include "range.h"
extern void func_004F8638(Object4F23*, s32);
void Object4F23::stop() { for(s32 i=0;i<3;++i) (&velocity.x)[i]=0.0f; speed=0.0f; func_004F8638(this,-1); }
