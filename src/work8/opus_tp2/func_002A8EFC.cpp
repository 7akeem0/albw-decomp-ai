#include "../../work6/gpt13/spawn.h"
extern const s32 ro_006930B8;
void func_002A8EFC(const Vec3&pos,u32 a0,const u32&b){const u32* pb=&b;u32 a=a0;SpawnParam p;p.m0=func_0019B04C(ro_006930B8);p.m50=data_0070C8E0->func_00581D60();copyPos(p.m4,pos);p.m20=a;p.m4c=*pb;func_004C43E0(data_00706E20,p);}
