typedef unsigned int u32; typedef int s32; typedef unsigned short u16; typedef short s16; typedef unsigned char u8; typedef signed char s8; typedef float f32; typedef unsigned long long u64;
struct Vec3 {f32 x,y,z; void setSub(const Vec3&,const Vec3&); void setZero(){for(int i=0;i<3;i++) (&x)[i]=0.f;} };
namespace sead {struct SafeString{SafeString(const char*s):mStringTop(s){} virtual void assureTerminationImpl_() const; const char* mStringTop;};}
struct StateA {char p[0x24];void func_0065DC84(int) ;};
struct StateB {char p[0x24];void func_0065DDC8(int) ;};
struct Sub510{char p[4];u8 m4;};
struct Sub320{char p[0x10];s8 m10;void next(s16,s8);};
struct EnA {char p0[0x2c];s16 m2c;char p2e[0x320-0x2e];Sub320 m320;char p331[0x3dc-0x331];Vec3 m3dc;char p3e8[0x508-0x3e8];s16 m508;char p50a[6];Sub510* m510;char p514[0x8bc-0x514];StateA state;char p8e0[0x10];u32 m8f0;char p8f4[9];u8 m8fd;};
struct EnB {char p0[8];Vec3 m8;char p14[0x2cc-0x14];u32 m2cc;char p2d0[0x3d0-0x2d0];Vec3 m3d0,m3dc;char p3e8[0x8d8-0x3e8];s32 m8d8;char p8dc[4];u16 m8e0,m8e2;char p8e4[12];StateB state;u8 m914,m915,m916;};
bool func_0058A8F0(void*); s32 func_0058AB74(void*);
void func_004FABDC(void*,s32,s32,s32);void func_004FC178(void*,s32);void func_002196D8(EnB*,bool);void func_00150A84(void*,const sead::SafeString&,s32);
struct Model{u32 func_00564A78(const sead::SafeString&);};
struct ActorPrimary {
virtual void v0();virtual void v1();virtual void v2();virtual ~ActorPrimary();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();virtual void v16();virtual void v17();virtual void v18();virtual void v19();virtual void v20();
char p4[0x32-4];s16 m32;char p34[0x320-0x34];};
struct ActorSecondary {virtual void b0();char p324[0x40c-0x324];Model*model;};
struct EnemyBase:ActorPrimary,ActorSecondary{
EnemyBase(void*,void*);virtual ~EnemyBase();virtual void c21();virtual void c22();virtual void c23();virtual void c24();virtual void c25();virtual void c26();virtual void c27();virtual void c28();virtual void c29();virtual void c30();
char p410[0x77d-0x410];u8 m77d,m77e,m77f;char p780[0x8bc-0x780];};
struct VZero{f32 x,y,z;VZero():x(0),y(0),z(0){}};
struct Derived:EnemyBase{Derived(void*,s32,void*);VZero v;f32 m8c8,m8cc;u32 m8d0,m8d4,m8d8,m8dc;u16 m8e0,m8e2,m8e4,m8e6,m8e8,m8ea;u8 m8ec,m8ed;};
struct Handle{u32 v;void clear(){v=0;}};struct Owner{char p[0x10];Handle h;};struct Game{char p[0x3dbe8];Owner*owner;};extern Game* data_00706E20;
void func_002AF5FC(Derived*,int,int);void func_002AED68(Derived*,int);void func_004FC218(Derived*,int,int,int);
Derived::Derived(void*a,s32 kind,void*b):EnemyBase(a,b),v(),m8c8(0),m8cc(0),m8d0(0),m8d4(0),m8d8(0),m8dc(0),m8e0(0),m8e2(0),m8e4(0),m8e6(0),m8e8(10),m8ea(0),m8ec(0),m8ed(kind){
s32 n=m32;if(n<1||n>15)n=5;m8c8=(f32)n;Handle*h=&data_00706E20->owner->h;if(h->v)h->clear();m8d0=model->func_00564A78(sead::SafeString("center"));func_002AF5FC(this,7,-1);func_002AED68(this,7);m77d=6;m77e=255;m77f=0;func_004FC218(this,5,-1,0x7fff);}
