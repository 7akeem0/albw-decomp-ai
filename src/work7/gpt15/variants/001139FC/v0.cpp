#include "../../range.h"
u32 func_001139FC(u32 addr){u32 result=0;if(addr>=0x14000000u&&addr<0x1c000000u)result=addr+0x0c000000u;else if((addr>=0x1f000000u&&addr<0x1f600000u)||addr==0x1f600000u)result=addr-0x07000000u;return result;}
