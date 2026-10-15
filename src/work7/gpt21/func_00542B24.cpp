#include "range.h"
struct S542 { char pad[0x38]; u16 flags; };
bool f_542B24(const S542* p) { return (p->flags & 2) != 0; }
