#include "range.h"
// 0x60xxxx: 40-byte "allocate + construct" factories:
//   T* f(u32 a) { T* p = (T*)::operator new(SIZE, NoThrow()); if (!p) return 0; return p->init(a); }
#define FACT(NAME, SIZE) \
struct NAME { char pad[SIZE]; NAME* init(u32 a); }; \
NAME* f##NAME(u32 a) { NAME* p = (NAME*)::operator new(SIZE, NoThrow()); if (!p) return 0; return p->init(a); }

FACT(C602E70, 0x440)
FACT(C603354, 0x440)
FACT(C60337C, 0x4b0)
FACT(C603DBC, 0x430)
FACT(C604F2C, 0x440)
FACT(C605488, 0x480)
FACT(C605C6C, 0x440)
FACT(C606428, 0x450)
FACT(C606984, 0x960)
FACT(C606B70, 0x480)
FACT(C607EDC, 0x440)
FACT(C608C5C, 0x450)
