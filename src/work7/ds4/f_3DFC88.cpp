#include "ds4.h"
extern "C" __svc(0x23) void closeHandle23(u32);

u32* func_003DFC88(u32* self) {
    u32* p = self + 1;
    if (*p) { closeHandle23(*p); *p = 0; }
    if (self[0]) { closeHandle23(self[0]); self[0] = 0; }
    return self;
}
