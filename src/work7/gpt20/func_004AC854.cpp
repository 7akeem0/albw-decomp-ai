#include "ladder_types.h"
union Table4AC8 {u8 bytes[64];u32 words[16];};
extern const Table4AC8 ro_0069E0B8;
u8 target(u32 index){Table4AC8 table=ro_0069E0B8;return table.bytes[index];}
