#include "en218.h"
struct SpawnParam {
 SpawnParam():m1c(0),m20(0),m24(0),m48(0),m4c(0),m2c0(0){func_002DFF7C();}
 void func_002DFF7C();
 u32 m0;Vec3 m4;u32 m10[3];u32 m1c,m20,m24;u16 m28,m2a,m2c;char p2e[0x44-0x2e];f32 m44;u32 m48,m4c;u16 m50;char p52[0x2c0-0x52];u32 m2c0;
};
extern const s32 ro_006939CC;u32 func_0019B04C(s32);
struct Global{u16 func_00581D60();};extern Global* data_0070C8E0;
struct Game;extern Game* data_00706E20;
void func_004C43E0(Game*,const SpawnParam&);void func_004C4AF4(Game*,const SpawnParam&,s32);
inline void copyPos(Vec3&d,const Vec3&s){d.x=s.x;d.y=s.y;d.z=s.z;}
