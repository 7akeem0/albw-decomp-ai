#include "range.h"
struct Owner547A { char pad0[0x48]; s32 kind; char pad4C[0xa]; s16 id; };
bool f_00547AE8(Owner547A* p) { return p->id>=0 && p->kind==9; }
