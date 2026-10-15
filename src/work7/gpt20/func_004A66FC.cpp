#include "ladder_types.h"
struct Item4A66 {u32 a,b,c;};
struct Object4A66 {char pad[0x24];Item4A66* items;};
void func_004A66FC(Object4A66* p,u32 a,u32 i) {Item4A66* q=&p->items[i];q->b=a;}
