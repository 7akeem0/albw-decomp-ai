#include "range.h"
struct FlagChild {u8 pad[0x2c];u32 flags;};struct Aux {u8 pad[0x61];u8 flag;void set(u8 v){flag=v;}};struct Obj {u8 pad[0x3a4];u32 id;u8 pad3a8[0x3dc-0x3a8];Vec3 velocity;u8 pad3e8[0x424-0x3e8];FlagChild*child;u8 pad428[0x8c8-0x428];Aux*aux;};extern void func_004F88A0(Obj*,u32);
void clear(Aux*a){a->flag=0;}
void f_002E44E0(Obj*p){p->velocity.setZero();p->child->flags&=~0x8000u;clear(p->aux);func_004F88A0(p,p->id);}
