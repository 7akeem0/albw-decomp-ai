#include "range.h"
struct Kind55B7 {char pad0[0x42];u16 kind;u32 subtype;};
struct Owner55B7 {char pad0[0x2c];Kind55B7*child;};
bool f_0055B76C(Owner55B7*p){return p->child->kind!=0x4b||p->child->subtype<5;}
