#include "range.h"
struct S{u32 vt;u16* data;s32 size;void set(s32 n,u16 v)  {((u16*)data)[n]=v;} void target() ;};void S::target() {u16* p=(u16*)data;s32 n=size;p[n-1]=0;}
