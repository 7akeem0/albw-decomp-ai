typedef unsigned int u32;typedef int s32;typedef signed char s8;typedef unsigned char u8;typedef float f32;
extern "C" f32 sqrtf(f32);
namespace sead{struct SafeString{const char* str;SafeString(const char* s):str(s){}virtual void assureTerminationImpl_()const;};}
struct Vec3{f32 x,y,z;Vec3(){}void func_00115C70(const Vec3&,const Vec3&);f32 length()const{f32 sq=x*x+y*y+z*z;return sqrtf(sq);}};
inline f32 distSqXZ(const Vec3& a,const Vec3& b){f32 dx=b.x-a.x;f32 dz=b.z-a.z;return dx*dx+dz*dz;}
struct B;
struct Timeline{void func_00352210(bool,f32);};
struct State{typedef void(B::*Func)();u32 counter;s8 cur,next;u8 num,pad;char p[8];Timeline* timeline;B* owner;Func* enter;Func* exec;Func* exit;
 void update(){(owner->*exec[cur])();++counter;if(timeline)timeline->func_00352210(true,(f32)counter);}
};
struct Damage{u32 valid;char p[0x21-4];s8 kind;};
struct Countdown{void set(u32 n){value=n;}void dec(){value=--value;}u32 value;Countdown(){}Countdown(u32 n):value(n){}bool step(){if(value<=0)return false;--value;return true;}};
struct B{char p[0x54];short area;char p58[0x368-0x56];Vec3 prev;char p374[0x3d0-0x374];Vec3 pos;char p3dc[0x43c-0x3dc];Damage* damage;char p440[0x458-0x440];f32 size;char p45c[0x8c0-0x45c];State state;char p8e4[0x8f4-0x8e4];Countdown cooldown;Vec3 motion;s8 playing;
 bool func_004F70A8();void func_004F48F0();void func_004F5588();Vec3* func_00520FC0();void func_004F5174(bool);void func_004F5BD8(s32,bool);void func_004FA124(s32,s32);void func_004F9FC4(Damage*);bool func_0058A44C();void func_00150A84(const sead::SafeString&,s32);void func_001507D8(const sead::SafeString&,s32);
 void f();void sound();
};
struct Player{void call5(const Vec3& p,int a,f32 r){if(a)func_002917A4(p,a,r);else func_002917A4(p,a,r);}void func_00291FE0(const Vec3&,f32);void func_002917A4(const Vec3&,int,f32);void func_00291A38(const Vec3&,f32);};extern Player* data_0070FB60;
struct Area{char p[0x4a];short type;char p4c[0x3c0-0x4c];s32 id;};struct AreaMgr{Area* func_00581C5C();};extern AreaMgr* data_0070C8E0;
struct Stage{char p[0x18];s8 type;};extern Stage* data_00709DF8;

void B::f(){if(!func_004F70A8())return;
 if(cooldown.value==0){
  Damage** d=&damage;
  if((*d)->valid){switch((*d)->kind){
   case 5:data_0070FB60->func_002917A4(pos,0,0.2f);__asm{nop}__asm{nop}cooldown.value=22;func_004FA124(damage->kind,0);func_004F9FC4(*d);break;
   case 8:data_0070FB60->func_00291A38(pos,0.2f);cooldown.value=50;func_004FA124(damage->kind,0);func_004F9FC4(*d);break;
   case 14:data_0070FB60->func_00291FE0(pos,0.2f);cooldown.value=50;func_004FA124(damage->kind,0);func_004F9FC4(*d);break;






  }}
 }else {u32& v=cooldown.value;--v;}
 state.update();func_004F48F0();func_004F5588();func_004F5174(distSqXZ(pos,*func_00520FC0())<400.0f);func_004F5BD8(0,false);
}
