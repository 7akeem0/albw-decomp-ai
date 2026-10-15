#include "../../range.h"
u32 func_0011F198(const s8*p,u32 mod){u32 hash=0;for(u32 i=0;;++i){s32 ch=p[i];if(ch==0)break;hash=hash*1170+ch;}return hash%mod;}
