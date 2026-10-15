typedef unsigned int u32;typedef int s32;typedef signed char s8;typedef unsigned char u8;typedef float f32;
extern "C" f32 sqrtf(f32);
namespace sead{struct SafeString{const char* str;SafeString(const char* s):str(s){}virtual void assureTerminationImpl_()const;};}
struct Vec3{void set(f32 a,f32 b,f32 c){x=a;y=b;z=c;}void set(const Vec3& d){x=d.x;y=d.y;z=d.z;}f32 x,y,z;Vec3(){}void func_00115C70(const Vec3&,const Vec3&);f32 length()const;};
inline f32 distSqXZ(const Vec3& a,const Vec3& b){f32 dx=b.x-a.x;f32 dz=b.z-a.z;return dx*dx+dz*dz;}
struct B;
struct Timeline{void func_00352210(bool,f32);};
struct State{typedef void(B::*Func)();u32 counter;s8 cur,next;u8 num,pad;char p[8];Timeline* timeline;B* owner;Func* enter;Func* exec;Func* exit;
 void update(){(owner->*exec[cur])();++counter;if(timeline)timeline->func_00352210(true,(f32)counter);}
};
struct Damage{u32 valid;char p[0x21-4];s8 kind;};
struct Countdown{u32 value;bool step(){if(value){--value;return true;}return false;}};
struct B{char p[0x54];short area;char p58[0x368-0x56];Vec3 prev;char p374[0x3d0-0x374];Vec3 pos;char p3dc[0x43c-0x3dc];Damage* damage;char p440[0x458-0x440];f32 size;char p45c[0x8c0-0x45c];State state;char p8e4[0x8f4-0x8e4];Countdown cooldown;Vec3 motion;s8 playing;
 bool func_004F70A8();void func_004F48F0();void func_004F5588();Vec3* func_00520FC0();void func_004F5174(bool);void func_004F5BD8(s32,bool);void func_004FA124(s32,s32);void func_004F9FC4(Damage*);bool func_0058A44C();void func_00150A84(const sead::SafeString&,s32);void func_001507D8(const sead::SafeString&,s32);
 void f();void sound();void setMotion(f32 a,f32 b,f32 c){motion.x=a;motion.y=b;motion.z=c;}void setPlaying(bool on,u8 v){if(on)playing=v;}
};
struct Player{void func_00291FE0(const Vec3&,f32);void func_002917A4(const Vec3&,int,f32);void func_00291A38(const Vec3&,f32);};extern Player* data_0070FB60;
struct Area{char p[0x4a];short type;char p4c[0x3c0-0x4c];s32 id;};struct AreaMgr{Area* func_00581C5C();};extern AreaMgr* data_0070C8E0;
struct Stage{char p[0x18];s8 type;};extern Stage* data_00709DF8;

inline Vec3 sub(const Vec3& a,const Vec3& b){Vec3 r;Vec3* p=&r;const Vec3* x=&a;const Vec3* y=&b;p->func_00115C70(*x,*y);return r;}
inline bool positive(f32 n){return n>0.0f;}
f32 Vec3::length()const{f32 sq=x*x+y*y+z*z;return sqrtf(sq);}
void B::sound(){Area* a=data_0070C8E0->func_00581C5C();if(!a)return;if(area!=a->id){playing=1;return;}
 const Vec3 d=sub(pos,prev);
 if(func_0058A44C()&&positive(d.length())) {
  {f32 y=d.y; s8 nv=0; if(y>0.01f)playing=nv;}
  if(data_00709DF8->type==9||data_00709DF8->type==13){
   switch(a->type){
    case 10:if(d.z>0.0f){}else goto done;if(!playing){if(size<2.0f)func_00150A84(sead::SafeString("SE_IronBall_APPEAR"),0);else func_00150A84(sead::SafeString("SE_IronBall_APPEAR_L"),0);playing=1;}break;
    case 11:if(d.y>=0.001f||d.y<=-0.001f)goto done;if(motion.y>0.01f){if(!playing){if(size<2.0f)func_00150A84(sead::SafeString("SE_IronBall_APPEAR"),0);else func_00150A84(sead::SafeString("SE_IronBall_APPEAR_L"),0);}playing=1;}break;
   }
  }
 } else {playing=1;goto done;}
 {
  if(size<2.0f)func_001507D8(sead::SafeString("SE_IronBall_ROLL"),0);else func_001507D8(sead::SafeString("SE_IronBall_ROLL_L"),0);
 }
 done:Vec3* p=&motion;p->x=d.x;p->y=d.y;p->z=d.z;
}
