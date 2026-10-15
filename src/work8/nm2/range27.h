#ifndef GPT27_RANGE_H
#define GPT27_RANGE_H
typedef unsigned char u8; typedef signed char s8;
typedef unsigned short u16; typedef signed short s16;
typedef unsigned int u32; typedef signed int s32;
typedef unsigned long long u64; typedef signed long long s64;
typedef float f32;
struct Vec2 { f32 x,y; };
struct Vec3 { f32 x,y,z; };
struct Pair { u32 a,b; };
struct BitFlag32 {u32 v; void change(u32 mask,bool on){if(on)v|=mask;else v&=~mask;} void set(u32 m){change(m,true);} void reset(u32 m){change(m,false);} };
struct BitFlag16 {u16 v; BitFlag16(){} BitFlag16(u16 x):v(x){} void reset(u16 m){*this=BitFlag16(v & ~m);} void set(u16 m){*this=BitFlag16(v | m);} };
// Controller near 0x2317C0: signed kind/index, frame, owner pointer.
struct Ctrl231 {s16 kind,index;u32 frame;void* owner;void init(void*,s16,s16);};
struct Parameter413 {u8 pad[0x20];u16 flags;u8 pad22[6];f32 value28,value2c,value30,value34,value38;};
struct Node412Shared {Node412Shared* next;};
struct Queue412Shared {u8 pad[0x16c];Node412Shared* head;Node412Shared* tail;u32 count;};
// Worker-27 list and lock views, verified by 0x4155F0/0x41568C.
struct Link27 {Link27*prev,*next;};
struct List27 {s32 count;Link27 root;};
struct Mutex27 {u32 words[3];};
struct Obj415Shared {u8 pad[0x1b8];u32 a,b,c;Mutex27 mutex;List27 queue;u8 pad1dc[0x1f4-0x1dc];u8 active;u8 pad1f5[2];u8 notified;};
// Intrusive next/previous node view, confirmed by the 0x417E80 iteration.
struct Node417Shared {Node417Shared*next,*prev;};
struct List417Shared {u32 a,b;Node417Shared root;};
struct Value414Shared {u8 pad[0x20];u16 flags;u8 gap[2];f32 value;};
struct Virtual20Shared {
 virtual void v0();virtual void v1();virtual void v2();virtual void v3();
 virtual void v4();virtual void v5();virtual void v6();virtual void v7();
 virtual void v8();virtual void v9();virtual void v10();virtual void v11();
 virtual void v12();virtual void v13();virtual void v14();virtual void v15();
 virtual void v16();virtual void v17();virtual void v18();virtual void v19();
};
#endif
