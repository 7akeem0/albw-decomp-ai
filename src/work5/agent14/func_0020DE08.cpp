#define EN_EXTRA void f();
#include "en20c.h"
inline void stopEff(Eff* e, bool v) { EffOwner* o = e->m20; if (o && e->m24 == o->mc && o->m4 > 0) o->m280 = v; u32 fl = e->m3c; fl &= ~4; fl |= 8; e->m3c = fl; }
void En::f() { func_004F6DA0(m8e8); EffHandle* h = &md3c; if (h->p && h->p->m1c == h->id) { stopEff(h->p, true); } mdb0 = 0; }
