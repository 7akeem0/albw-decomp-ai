#include "range.h"
struct Item {u8 storage[0x1604];void func_00320D50();};
struct Obj {u8 pad[0xd60];Item items[1];};
void f_002937AC(Obj* p,s32 i){p->items[i].func_00320D50();}
