#include "range27.h"
struct Child40C {u8 pad[0x44];u32 count;u8 pad48[0x5d-0x48];u8 kind;};
extern "C" u32 size_40C878(Child40C* c){return c->count*c->kind*640+32;}
