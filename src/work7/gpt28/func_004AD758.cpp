#include "range.h"
extern SignedIndex18*data_00709DF8;extern void func_001BBF3C(Item364*, s32);
struct Slots{Item364 data[2];Item364&at(s32 i){return data[i];}};struct Obj{char pad[0x44];Slots slots;void get();};void Obj::get(){s8 i=data_00709DF8->index;func_001BBF3C(&slots.at(i), i);}
