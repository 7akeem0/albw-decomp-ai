#include "../../../work6/gpt13/spawn.h"
extern const s32 ro_0069329C;
struct Vec2f { f32 x, y; };
void func_0033CFB0(const Vec3&pos,const Vec2f&r){SpawnParam p;p.m0=func_0019B04C(ro_0069329C);p.m50=data_0070C8E0->func_00581D60();copyPos(p.m4,pos);p.m20=0;p.m28=(s32)(r.x*10.0f);p.m2a=(s32)(r.y*10.0f);func_004C43E0(data_00706E20,p);}
