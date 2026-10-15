#include "range.h"
struct Link{u8 pad[0x10];void*selected;};struct Global{u8 pad[0x3dbe8];Link*link;};extern "C" Global*data_00706E20;
struct S{u8 pad[0x2cc];void*id;u8 gap[0x8e4-0x2d0];u16 time;};extern "C" void func_004FC570(S*,s32);
void target(S*p,s32 kind){if(kind==5)return;func_004FC570(p,kind);p->time=150;void*&selected=data_00706E20->link->selected;if(selected&&selected==p->id)selected=0;}
