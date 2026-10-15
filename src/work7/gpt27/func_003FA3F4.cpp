#include "range.h"
struct Array3FA{u16*data;u32 count;};void set(Array3FA*p,u32 i,u16 v){p->data[i]=v;}
void set2(u16*p,u32 i,u16 v){p[i]=v;}
void func_003FA3F4(Array3FA*p,u16*data,u32 count){p->data=data;p->count=count;if(count){u32 i=0;do{u16*q=p->data;set2(q,i,0xffff);++i;}while(--count);}}
