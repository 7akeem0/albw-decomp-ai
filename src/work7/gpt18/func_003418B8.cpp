#include "range.h"
struct O18B {u8 pad[0x20];u16 packed;};
extern "C" bool func_003418B8(void*,O18B*p){u32 k=p->packed&31;return k==5||k==3||k==4;}
