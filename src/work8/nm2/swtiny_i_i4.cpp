#include "range.h"
struct Elem{char b[92];};struct S{char pad[0x1c];Elem* data;};
Elem* f(S*p,u32 i){u32 k=i&0xffffff;return &p->data[k];}
