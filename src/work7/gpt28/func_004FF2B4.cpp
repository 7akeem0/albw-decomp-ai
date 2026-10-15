#include "range.h"
void Object4FF2::mark() { if(kind == 1) flags.set(0x2000); else flags.set(0x1000); }
