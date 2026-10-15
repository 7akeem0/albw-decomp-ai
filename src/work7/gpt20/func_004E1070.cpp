#include "ladder_types.h"
struct O4E10 {char pad0[0x3dc];Vec3 velocity;char pad3e8[0x44];u16 kind;};
extern const Vec3*func_00559B54(O4E10*);
void target(O4E10*p){if(p->kind==2)return;Vec3*dest=&p->velocity;*dest=*func_00559B54(p);}
