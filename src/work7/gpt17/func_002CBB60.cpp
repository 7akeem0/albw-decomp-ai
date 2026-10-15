#include "range.h"
struct Obj {u8 pad[0x8ac];BitFlag32 flags;};
bool f_002CBB60(Obj* p,bool b){if(!b)p->flags.set(0x10);return true;}
