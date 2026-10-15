#include "range.h"
struct S541 { char pad[0xad]; s8 value; };
struct O541 { char pad[0x20]; S541* ptr; };
s8 f_5415F4(const O541* p) { return p->ptr ? p->ptr->value : 0; }
