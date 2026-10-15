#include "range.h"
struct Mtx {f32 m[12];};
struct Actor {char pad[0x600];void*model;};
struct S {char pad[0x10];Actor*actor;};
extern const Mtx* func_0053ECF8(void*);
void f_55693C(S*p,Vec3*out){const Mtx*m=func_0053ECF8(p->actor->model);out->x=m->m[3];out->y=m->m[7];out->z=m->m[11];}
