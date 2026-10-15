#define EN_EXTRA void f();
#include "en20a.h"
void En::f() {
    m3dc.z = 0.0f;
    m3dc.y = 0.0f;
    m3dc.x = 0.0f;
    offF59c(0x10);
    ma6c = 0;
 { Vec3* p = &m4e4; p->set(0.75f, 0.75f, 0.75f); } 
    mc5c = 0;
    { u32* d = (u32*)&md30; u32* s = (u32*)&md24; d[0] = s[0]; d[1] = s[1]; d[2] = s[2]; }
    { u32* d = (u32*)&mb84; u32* s = (u32*)&md24; d[0] = s[0]; d[1] = s[1]; d[2] = s[2]; }
}
