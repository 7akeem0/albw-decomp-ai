#include "range.h"
struct G2FD {u8 pad[0x2b4];u32 flags;void clear(){flags&=~8u;}};extern G2FD* data_0070D858;
extern "C" void func_004ECDE8(void*);
extern "C" void func_00372FD8(void*p){func_004ECDE8(p);data_0070D858->clear();}
