#include "range29.h"
struct Inner53FA{char pad0[0x52];u16 kind;};struct Child53FAD{char pad0[0x18];Inner53FA*inner;char pad1c[0x26];u16 kind;};
extern "C" bool g_0053FADC(Child53FAD*c){return c->kind==0x7e&&c->inner->kind==0x74;}
