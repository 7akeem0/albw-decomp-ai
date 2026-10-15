#include "range.h"
struct S{char pad[0x124];u32 mode;};extern S bss_0079CAB8;
void f_5FEF2C(u32 v){switch(v){case 0x400:case 0x401:bss_0079CAB8.mode=v-0x400;break;case 0x410:bss_0079CAB8.mode=2;break;}}
