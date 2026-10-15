#include "range.h"
struct From55C { char pad[0xc]; u8 value; };
struct To55C { char pad[0x2200]; u8 value; };
void f_55C41C(const From55C* p,To55C* q) { q->value=p->value; }
