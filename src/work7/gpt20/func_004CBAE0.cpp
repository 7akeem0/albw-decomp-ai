#include "ladder_types.h"
struct O4CBA { char pad0[0x8e5]; u8 kind; char pad8e6[0xa9]; u8 flag; };
bool blocked(O4CBA* p) { return p->flag || p->kind == 4; }
bool target(O4CBA* p) { bool value=blocked(p); return !value; }
