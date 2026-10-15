#pragma once
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef unsigned long long u64;
typedef long long s64;
typedef float f32;
typedef double f64;
typedef unsigned long ulong;

struct BitFlag32 {
    u32 v;
    void change(u32 m, bool on) { if (on) v |= m; else v &= ~m; }
    void set(u32 m) { change(m, true); }
    void reset(u32 m) { change(m, false); }
};

struct BitFlag16 {
    u16 v;
    void change(u16 m, bool on) { if (on) v |= m; else v &= ~m; }
    void set(u16 m) { change(m, true); }
    void reset(u16 m) { change(m, false); }
};
extern s32 func_00588BF0(void*, s32);
extern void func_0065C1CC(void*, s32) ;
void func_001C959C(void*self){
 if(*(u16*)((u8*)self+0x36)==0)goto change;
 char*base=(char*)self+0x400;
 if(*(u8*)((char*)self+0x4b0)==0){if(func_00588BF0(self,0)!=0)goto change;}
 if(*(u8*)(base+0xb0)==1){if(func_00588BF0(self,0)==0)goto change;}
 return;
 change:func_0065C1CC((char*)self+0x40c,1);
 }