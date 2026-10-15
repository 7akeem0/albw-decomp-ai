typedef unsigned int u32; typedef int s32; typedef unsigned short u16; typedef short s16; typedef unsigned char u8; typedef signed char s8; typedef float f32; typedef unsigned long long u64;
struct Vec3 {f32 x,y,z; void setSub(const Vec3&,const Vec3&); void setZero(){for(int i=0;i<3;i++) (&x)[i]=0.f;} };
namespace sead {struct SafeString{SafeString(const char*s):mStringTop(s){} virtual void assureTerminationImpl_() const; const char* mStringTop;};}
struct StateA {char p[0x24];void func_0065DC84(int) __attribute__((weak));};
struct StateB {char p[0x24];void func_0065DDC8(int) __attribute__((weak));};
struct Sub510{char p[4];u8 m4;};
struct Sub320{char p[0x10];s8 m10;void next(s16,s8);};
struct EnA {char p0[0x2c];s16 m2c;char p2e[0x320-0x2e];Sub320 m320;char p331[0x3dc-0x331];Vec3 m3dc;char p3e8[0x508-0x3e8];s16 m508;char p50a[6];Sub510* m510;char p514[0x8bc-0x514];StateA state;char p8e0[0x10];u32 m8f0;char p8f4[9];u8 m8fd;};
struct EnB {char p0[8];Vec3 m8;char p14[0x2cc-0x14];u32 m2cc;char p2d0[0x3d0-0x2d0];Vec3 m3d0,m3dc;char p3e8[0x8d8-0x3e8];s32 m8d8;char p8dc[4];u16 m8e0,m8e2;char p8e4[12];StateB state;u8 m914,m915,m916;};
bool func_0058A8F0(void*); s32 func_0058AB74(void*);
void func_004FABDC(void*,s32,s32,s32);void func_004FC178(void*,s32);void func_002196D8(EnB*,bool);void func_00150A84(void*,const sead::SafeString&,s32);
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
extern const s32 ro_00693114;
void func_004E87D4(const Vec3&pos,u16 a){SpawnParam p;p.m0=func_0019B04C(ro_00693114);__schedule_barrier(); p.m50=a;p.m2a=1;copyPos(p.m4,pos);p.m20=0;func_004C43E0(data_00706E20,p);}
