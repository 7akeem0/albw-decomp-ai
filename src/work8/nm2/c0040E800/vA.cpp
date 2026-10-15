#include "range.h"
struct Pair{u32 start,end;};struct S{char pad[0xc];Pair bounds;u32 cur;};
bool f_0040E800(S*p,u32 start,u32 n){u32 end=start+n;start+=31;start&=~31u;if(start>end)return false;Pair b={start,end};p->bounds=b;p->cur=start;return true;}
