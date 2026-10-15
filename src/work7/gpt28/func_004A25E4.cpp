#include "range.h"
struct Entry4A25 { u32 first,second; };
struct Object4A25 { u32 capacity,count;Entry4A25* data;void push(u32,u32); };
void Object4A25::push(u32 a,u32 b) { data[count].first=a;data[count].second=b;++count; }
