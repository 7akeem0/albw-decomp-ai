

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
struct Vec3 {
f32 x,y,z;
void setZero(){
for(s32 i=0;i<3;++i)(&x)[i]=0.0f;
}
};
template<class T> struct ResourceEntry16 {
T* object;
u32 reserved[3];
};
struct Flag32 {
    u32 value;
    void set(u32 mask) {
value |= mask;
}
    void reset(u32 mask) {
value &= ~mask;
}
    void change(u32 mask, bool on) {
if (on) value |= mask;
else value &= ~mask;
}
    void setB(u32 mask) {
change(mask,true);
}
    void resetB(u32 mask) {
change(mask,false);
}
};
struct FloatPair {
f32 first,second;
};
struct IpcCommand {
u32 header,result;
};
struct CleanupOwner12 {
u8 pad14[0x14];
void*receiver;
u32 reserved18;
void*argument;
};
struct DiagnosticRecord {
u8 kind,active;
u16 tag;
u32 result,pc;
};
struct ActorMotionFlags {
u8 pad3DC[0x3dc];
Vec3 velocity;
u8 pad59C[0x59c-0x3e8];
Flag32 flags;
u8 pad8EC[0x8ec-0x5a0];
u32 word8EC;
u8 pad95A[0x95a-0x8f0];
u8 state95A;
};
struct Mat33 {
f32 m[9];
};
struct ArrayCounts {
s32 count,capacity;
};
struct Param{
u32 value;
u8 enabled;
u32 send(u32 cmd);
};
extern u32 func_00108CDC(u32,const void*,u32,void*,u32,u32*);
u32 Param::send(u32 cmd){
u32 z=0;
return func_00108CDC(cmd,this,sizeof(Param),(void*)z,z,(u32*)z);
}
u32 func_00105374(u32 value,u8 on){
Param p;
p.value=value;
p.enabled=on;
return p.send(5);
}
