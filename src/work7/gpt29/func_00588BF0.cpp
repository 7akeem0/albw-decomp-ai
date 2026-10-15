#include "range.h"
struct Owner588B { char pad0[0x34]; u8 categories[2];u16 ids[2]; };
extern void* data_0070C8E0;
extern bool func_005822A0(void*,u32,u32);
bool f_00588BF0(Owner588B* p,u32 index) { u8* b=p->categories;u16* h=p->ids;u32 category=b[index];return func_005822A0(data_0070C8E0,h[index],category); }
