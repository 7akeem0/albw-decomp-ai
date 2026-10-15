#include "range.h"
struct C486 {u8 pad[0x42];u16 kind;};struct O486 {u8 pad[0x2c];C486* child;u8 gap[0xd4-0x30];u8 flag,guard;};
extern "C" void func_00364864(O486*p){if(p->child->kind==34&&p->guard==0)p->flag=1;}
