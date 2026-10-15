#include "range.h"
struct AnimElem286B {u8 pad[0x10];f32 rate;};
struct AnimArr286B {u8 pad[0x14];AnimElem286B* elems;};
struct O286B {u8 pad[0x414];AnimArr286B* anim;};
void f_286BE0(O286B* p){p->anim->elems->rate=0.0f;}
