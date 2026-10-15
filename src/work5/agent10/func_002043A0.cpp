#define EN_EXTRA void f();
#include "en204.h"
inline bool isK(u8 k) { return k == 30 || (u32)(k - 14) <= 3; }
 void En::f() { if (m30 == 1) { u8 k = m510->m4; if (!(k == 30 || (u32)(k - 14) <= 3) || m8c4 > 0.1f || m508 <= 0) m8c8 = 1; } if (m510->m4 == 0) { Vec3* v = &m4e4; v->x = 1.0f; v->y = 1.0f; v->z = 1.0f; if (m508 <= 0) mState.changeState(8); else mState.changeState(4); } }
