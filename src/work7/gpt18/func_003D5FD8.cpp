#include "range.h"
struct F{char pad[8];u8 code;char gap[1];u8 kind;};struct Q{F*p;};struct O{char pad[16];u32 count;};u32 f(O*p,Q*q){q->p->code=17;q->p->kind=6;++p->count;return 0;}
