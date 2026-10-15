#include "ladder_types.h"
struct Base4948 {Base4948();virtual void run();char pad4[0x14c];};
extern const u8 ro_006A8A6C[0x1c];
extern void func_0010E3C4(void*,const void*,u32);
struct Object4948:Base4948 {char pad150[0x20];u8 config[0x1c];Object4948();};
Object4948::Object4948(){func_0010E3C4(config,ro_006A8A6C,0x1c);}
