#include "range.h"
struct Global {char pad[0x11];u8 active;char pad12[0xa0-0x12];u32 id;};
extern Global bss_0079CAB8;
bool f_600634(u32 id){return bss_0079CAB8.id==id&&bss_0079CAB8.active;}
