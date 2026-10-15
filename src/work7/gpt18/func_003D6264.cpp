#include "range.h"
struct F{char pad[8];u8 code;char gap[1];u16 kind;};struct Q{F*p;};struct O{char pad[16];u32 count;};u32 f(O*p,Q*q){q->p->code=0;q->p->kind=9;++p->count;return 0;}
