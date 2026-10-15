#include "range.h"
struct S {u32 word;u32* count;void** items;u8 active;};
extern "C" void* f_0041343C(S* s,u32 i,void* v){if(s->active&&s->items){if(*s->count>i){void* old=s->items[i];s->items[i]=v;return old;}}return 0;}
