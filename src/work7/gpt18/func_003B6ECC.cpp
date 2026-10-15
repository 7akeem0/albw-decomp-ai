#include "range.h"
struct Random{u32 words[4];u32 getU32();u32 bounded(u32 n){return (u32)(((unsigned long long)getU32()*n)>>32);}};struct G{char pad[0x660];Random random;};extern G*data_007124F0;extern const u8 ro_00694E7F[];u8 f(){return ro_00694E7F[data_007124F0->random.bounded(8)];}
