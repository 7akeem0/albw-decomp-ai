#include "range.h"
struct S { char pad0[0x14]; u32 entries[6]; u8 count; };
struct View { u8 count; u32* data; };
void f_546244(S* p, View* out) { out->count=p->count; out->data=p->entries; }
