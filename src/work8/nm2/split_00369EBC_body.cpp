#include "range.h"
struct C{char pad[0x3c];s32 count;u32 max;void**data;char p48[0x78-0x48];void*selected;};
extern "C" void func_00369ED0(C* c,s32 i){if(i>=0&&i<c->count)c->selected=c->data[i];}
