#include "range.h"
struct S { char pad[0x660]; u32 random; };
extern S* data_007124F0;
u32* f_58A7D4() { return &data_007124F0->random; }
