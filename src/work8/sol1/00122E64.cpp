

typedef unsigned char u8; typedef signed char s8;
typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct Vec3 { f32 x,y,z; void setZero(){for(s32 i=0;i<3;++i)(&x)[i]=0.0f;} };
template<class T> struct ResourceEntry16 { T* object; u32 reserved[3]; };
struct Flag32 {
    u32 value;
    void set(u32 mask) { value |= mask; }
    void reset(u32 mask) { value &= ~mask; }
    void change(u32 mask, bool on) { if (on) value |= mask; else value &= ~mask; }
    void setB(u32 mask) { change(mask,true); }
    void resetB(u32 mask) { change(mask,false); }
};
struct FloatPair { f32 first,second; };
struct IpcCommand { u32 header,result; };
struct CleanupOwner12 { u8 pad14[0x14]; void*receiver; u32 reserved18; void*argument; };
struct DiagnosticRecord { u8 kind,active; u16 tag; u32 result,pc; };
struct ActorMotionFlags { u8 pad3DC[0x3dc]; Vec3 velocity; u8 pad59C[0x59c-0x3e8]; Flag32 flags; u8 pad8EC[0x8ec-0x5a0]; u32 word8EC; u8 pad95A[0x95a-0x8f0]; u8 state95A; };
struct Mat33 { f32 m[9]; };
struct ArrayCounts { s32 count,capacity; };
extern "C" void func_004FABDC(void*,s32,s32,s32);
struct S{u8 pad3DC[0x3dc];Vec3 velocity;u32 angle;u8 pad3EC[0x8e0-0x3ec];f32 first,second;u8 gap8E8[2];u8 flag;u8 gap8EB;u32 saved;};
struct Sub800{char pad[0xe0];f32 first,second;u8 gap[2];u8 flag;u8 gap2;u32 saved;};
static void phase(Sub800*s,S*p){s->first=0.0f;s->second=0.0f;s->flag=0;s->saved=p->angle;p->velocity.z=0.0f;p->velocity.x=0.0f;}
extern "C" void func_00122E64(S*p){func_004FABDC(p,0,-1,0);phase((Sub800*)((char*)p+0x800),p);}
