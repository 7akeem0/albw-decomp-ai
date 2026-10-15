#ifndef GPT19_RANGE_H
#define GPT19_RANGE_H
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef signed long long s64;
typedef unsigned long long u64;
typedef float f32;
struct Vec2 {f32 x,y;};
struct Vec3 { f32 x,y,z; };
struct Pair32 {u32 a,b;};
struct RangeNode19 {RangeNode19* prev;RangeNode19* next;};
struct CountedList19 {u32 count;RangeNode19 root;};
struct CriticalSection19 {u32 words[3];};
struct Flag32 { u32 v; void change(u32 m,bool on){if(on)v|=m;else v&=~m;} void set(u32 m){change(m,true);} void reset(u32 m){change(m,false);} };
struct Flag16 {u16 v;Flag16(){} Flag16(u16 x):v(x){} void reset(u16 bits){*this=Flag16(v&~bits);} void set(u16 bits){*this=Flag16(v|bits);}};
struct Ctrl231 {s16 kind,index;u32 frame;void* owner;void init(void*,s16,s16);};
#endif
