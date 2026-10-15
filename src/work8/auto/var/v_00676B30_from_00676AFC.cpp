#include "../../../work7/gpt22/range.h"
bool target(u32 x){u32 kind=(x&0x3fc00)>>10;if(kind!=17)return false;s32 n=x&0x3ff;if(n<130)return false;if(n>179)return false;return true;}