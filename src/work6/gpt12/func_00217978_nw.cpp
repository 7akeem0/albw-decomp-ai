typedef unsigned int u32;
typedef int s32;
typedef signed char s8;
typedef unsigned char u8;
typedef float f32;
struct Vec3 { f32 x,y,z; Vec3(){} Vec3(f32 a,f32 b,f32 c):x(a),y(b),z(c){} void set(f32 a,f32 b,f32 c){x=a;y=b;z=c;} };
struct Timer { u32 cur,max; f32 rate;
 void start(u32 n,u32 c=0){max=n;if(n)rate=1.0f/n;else rate=0;cur=c;}
 bool step();
 bool stepReverse(){Timer t=*this;if(t.max>t.cur){cur=t.cur+1;return true;}return false;}
 f32 progress()const;
};
f32 Timer::progress()const{if(max!=0){if(cur!=0){if(cur<max)return cur*rate;return 1;}}return 0;}
bool Timer::step(){Timer t=*this;if(t.cur<t.max){cur=t.cur+1;return true;}return false;}
struct State { char p[0x24]; void func_0065D9FC(s32) ; };
struct En { char p0[0x3d0]; Vec3 pos; Vec3 vel; s32 angle; char p3ec[0x8bc-0x3ec]; State state;
 char p8e0[0xa3c-0x8e0]; f32 a3c; char pa40[4]; Vec3 quad; char pa50[0xa64-0xa50]; s32 a64;
 char pa68[0xad0-0xa68]; Timer timer; Timer timer2;
 bool func_00521060(); bool func_002160F0(); void func_00215B90(f32); f32 func_0058AA40();
 void f();
};
void func_0051D27C(s32*,s32,s32);

struct B { char p[0x4e4]; Vec3 scale; char p2[0x8e4-0x4f0]; Timer timer; f32 factor; void func_004F499C(int); void f(); };
void B::f(){f32 v=(1.0f-timer.progress())*factor;Vec3& p=scale;p=Vec3(v,v,v);if(!timer.step())func_004F499C(0);}
