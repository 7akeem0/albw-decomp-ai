#include "../../range.h"
struct Config{u8 pad[8];u32 width;u8 gap[0x164-12];u32 mode;};extern Config bss_0079CAB8;void func_001060C0(u32 mode){if(bss_0079CAB8.mode==mode)return;switch(mode){case 0x700:bss_0079CAB8.width=400;break;case 0x701:bss_0079CAB8.width=800;break;case 0x702:bss_0079CAB8.width=400;break;default:return;}bss_0079CAB8.mode=mode;}
