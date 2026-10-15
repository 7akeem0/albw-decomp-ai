#include "range.h"
struct Obj {u8 pad[0x1a8];u32 timer;};
extern bool func_00540370(Obj*,s32);
void f_00296170(Obj* p){if(func_00540370(p,4))p->timer=30;}
