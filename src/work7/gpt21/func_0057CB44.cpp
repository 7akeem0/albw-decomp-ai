#include "range.h"
struct S57C { char pad[0xe8]; u8 value; };
bool f_57CB44(const S57C* p) { return p->value==1; }
