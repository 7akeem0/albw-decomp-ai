#include "range.h"
struct Array3FA{f32*data;u32 count;};void set(Array3FA*p,u32 i,f32 v){p->data[i]=v;}
void func_003FA4B8(Array3FA*p,f32*data,u32 count){p->data=data;p->count=count;u32 i=0;do{set(p,i++,0.0f);}while(i<=count-1);}
