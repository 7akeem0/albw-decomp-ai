#include "range.h"
__svc(0x23) u32 closeHandle(u32);
struct HDBD {u32 handle;~HDBD();};
HDBD::~HDBD(){if(handle){closeHandle(handle);handle=0;}}
