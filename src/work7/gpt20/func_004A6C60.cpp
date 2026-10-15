#include "ladder_types.h"
struct Entry4A6C60 {u32 a,b;};
struct O4A6C60 {u32 capacity,count;Entry4A6C60* data;};
extern "C" void func_004A6C60(O4A6C60*p,u32 a,u32 b){p->data[p->count].a=a;p->data[p->count].b=b;++p->count;}
