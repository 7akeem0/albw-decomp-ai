#include "range.h"
struct S { char pad[0x2402]; u8 flag; };
bool f_54F504(void*, S* p) { p->flag=1; return true; }
