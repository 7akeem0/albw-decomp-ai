#include "range.h"
u32 Object4D74::get() const { if(!active) return 0; return const_cast<Buffer8&>(buffer)[0].m4; }
