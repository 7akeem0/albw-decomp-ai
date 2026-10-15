#define EN_EXTRA void f();
#include "en208.h"
void En208::f() { Vec3 v; Vec3 d; const Vec3* from = &m3d0; d.setSub(*from, *func_00520FC0(this)); f32 x = d.x; f32 z = d.z; v.x = x; v.z = z; v.y = 0.0f; v.normalize(); { Vec3& p = v; p.setMul(p, 2.7f); } { Vec3& p = v; p.setDiv(p, 28.0f); } m3dc.x = v.x; m3dc.z = v.z; m3dc.y = func_004F944C(); *(V3U*)&mc88 = *(V3U*)func_00520FC0(this); func_004FABDC(this, 0xe, 1, 0); }
