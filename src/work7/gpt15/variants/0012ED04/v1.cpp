#include "../../range.h"
struct Buffer{ArrayCounts counts;void**data;};struct S{u8 pad[0xe10];Buffer buffer;};extern s32 func_0060B5C4(const void*,const void*);typedef s32(*Compare)(const void*,const void*);extern void func_0048C258(Buffer*,Compare);
void inc(S*p){++p->buffer.counts.count;}void func_0012ED04(S*p,void*value){ArrayCounts c=p->buffer.counts;if(c.count<c.capacity){p->buffer.data[c.count]=value;inc(p);}func_0048C258(&p->buffer,func_0060B5C4);}
