#include "ds3.h"
// guard + singleton chase + tail call into 0x1212EC.
struct Obj2E1B70 { u32 m0; u16 m4; u16 m6; };
extern void* data_00708998;
u32 func_001212EC(void*, Obj2E1B70*, u32, u32);
u32 func_002E1B70(Obj2E1B70* o) {
    if (o->m0 == 0) return 0;
    void* g = data_00708998;
    if (g == 0) return 0;
    void* h = *(void**)((char*)g + 0x18);
    if (h == 0) return 0;
    return func_001212EC(h, o, o->m6, 0);
}
