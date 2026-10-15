#include "range.h"
struct Object52EF { char pad0[0x24]; void* model; char pad28[0xe1]; u8 active; };
extern bool func_0057D86C(void*);
bool f_0052EF6C(Object52EF* owner) { return owner->active || func_0057D86C(owner->model); }
