#ifndef GPT17_RANGE_H
#define GPT17_RANGE_H
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef signed short s16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef int s32;
typedef float f32;
struct Vec3 { f32 x,y,z; void setZero(){for(s32 i=0;i<3;++i)(&x)[i]=0.0f;} };
struct BitFlag32 {
 u32 v;
 void change(u32 mask,bool on){if(on)v|=mask;else v&=~mask;}
 void set(u32 mask){change(mask,true);}
 void reset(u32 mask){change(mask,false);}
};
struct Word32 {u32 v;Word32(u32 n):v(n){}};
struct BitFlag8 {
 u8 v;
 void change(u8 mask,bool on){if(on)v|=mask;else v&=~mask;}
 void set(u8 mask){change(mask,true);}
 void reset(u8 mask){change(mask,false);}
};
struct BitFlag16 {
 u16 v;
 BitFlag16(){}
 BitFlag16(u16 n):v(n){}
 void set(u16 mask){v|=mask;}
 void setWrapped(u16 mask){*this=BitFlag16(v|mask);}
 void reset(u16 mask){*this=BitFlag16(v&~mask);}
};
struct Interp { void setTarget(s32 frames, f32 target); u8 opaque[0x1c]; };
// 002D55D0 returns its receiver +8, or null for -1/-2.
struct StateData {u16 id,reserved2;u8 flag;u8 reserved5[3];u32 value;};
struct StateControl {StateData* func_002D55D0(s32);};
struct ArrayCounts {s32 num,capacity;};
struct ObjectNode {ObjectNode*prev;ObjectNode*next;void*object;};
template<class T> struct PtrArray {
 s32 num,capacity;
 T** data;
 T* at(s32 i)const{if((u32)i<(u32)num)return data[i];return 0;}
};
struct CounterPair {u32 cur,max;bool step(){CounterPair c=*this;if(c.cur<c.max){cur=c.cur+1;return true;}return false;}};
struct StateObject48 {u8 pad[0x48];StateControl* state;};
// StateSlot view from work4/gpt/include/state_slot.h.
struct StateSlot12 {void* owner;s8 mode,current,pending;u8 unknown7,gate8,gate9,unknownA[2];};
#endif
