#include "range.h"
struct S { char pad[6]; u16 m6; };
extern "C" u16 func_0011E668(const S* p) { return p ? p->m6 : 0; }
