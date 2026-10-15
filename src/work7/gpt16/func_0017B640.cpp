#include "range.h"
extern void*data_0070FB60;extern const u32 ro_0069ECD4[];extern u32 func_0055696C(void*,u32);
bool f_0017B640(){void*player=data_0070FB60;for(s32 i=0;i<9;++i){if(func_0055696C(player,ro_0069ECD4[i])==1)return true;}return false;}
