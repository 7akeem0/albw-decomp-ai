#define EN_EXTRA void f();
#include "en208.h"
void En208::f() { Vec3 s; s.set(md0c.x * 0.75f, md0c.y, md0c.z * 0.75f); copyVec(&m470, s); m574 += (-2.5f - m574) * 0.03f; if (m994.stepR()) { m3d0.y = 0.0f; } else { func_0020DBB8(this); } }
