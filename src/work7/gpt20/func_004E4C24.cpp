#include "ladder_types.h"
struct O4E4C {char pad0[0x478];void* model;char pad47C[0x50];void* child;char pad4D0[0xd9];u8 first;char pad5AA[0x63];u8 second;char pad60E[0x63];u8 third;};
extern "C" void func_004CF478(void*,bool,u32);
extern "C" void func_00151148(void*,bool);
extern "C" void func_004E4C24(O4E4C*p){func_004CF478(p->model,false,0);func_00151148(p->child,false);p->first=0;p->second=0;p->third=0;}
