#include "range.h"
struct OE0EC {u8 flag;u8 pad[0x3b];s32 value;};
extern "C" void func_003DE0EC(OE0EC*p){if(p->flag){p->value=-1;p->flag=0;}}
