#include "range.h"
struct Aux {u8 pad[0x61];u8 flag;void set(u8 v){flag=v;}};struct Obj {u8 pad[0x3dc];Vec3 velocity;u8 pad3e8[0x430-0x3e8];Aux*aux;u8 pad434[0x458-0x434];void*model;};extern void func_004CF478(void*,bool,s32);
void f_002890E4(Obj*p){func_004CF478(p->model,false,0);p->aux->set(0);p->velocity.setZero();}
