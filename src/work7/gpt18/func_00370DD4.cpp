#include "range.h"
struct Obj370D {char pad[0x910];u32 value;};
extern bool func_004F7BB8(Obj370D*,void*);
bool func_00370DD4(Obj370D* p,void* a){if(p->value<20)return false;return func_004F7BB8(p,a);}
