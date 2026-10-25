#ifndef GPT24_RANGE_H
#define GPT24_RANGE_H
#include "albw_types.h"
struct Vec3_24 { f32 x, y, z; };
struct Flag32_24 {
    u32 v;
    void change(u32 mask, bool on) { if (on) v |= mask; else v &= ~mask; }
    void set(u32 mask) { change(mask, true); }
    void clear(u32 mask) { change(mask, false); }
};
struct Actor15E2_24 {
    char pad0[0x59c]; Flag32_24 flags;
    char pad5a0[0x918-0x5a0]; u8 active;
    char pad919[0xfa4-0x919]; f32 rate;
    char padfa8[0xfb8-0xfa8]; u32 counter;
};
struct Object173F_24 {char pad[0x418]; u32 state; u8 flag;};
struct Timer24 {
    u32 cur,max; f32 rate;
    void start(u32 n,u32 c=0){max=n;if(n)rate=1.0f/n;else rate=0;cur=c;}
    bool step(){Timer24 t=*this;if(t.cur<t.max){cur=t.cur+1;return true;}return false;}
};
struct Object1740_24 {char pad[0x440]; Timer24 timer; char pad44c[4]; u8 flag;};
struct FlagChild24 {char pad[0x61];u8 flag;void set(u8 n){flag=n;}};
struct Object197E_24 {char pad[0x43c];FlagChild24* child;Timer24 timer;};
struct Object19B8_24 {char pad[0x440];Timer24 timer;u8 flag;};
struct Object1B2A_24 {char pad[0x3dc];Vec3_24 velocity;char pad3e8[0x908-0x3e8];u32 state;};
struct Selection24 {char pad[0x14];void* selected;};
struct SelectionManager24 {char pad[0x64];Selection24* child;};
struct VirtualChild230_24 {
    virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();
    virtual void finish();
};
struct Object230_24 {
    virtual void v0();virtual void v1();virtual void v2();virtual void v3();
    virtual void v4();virtual void v5();virtual void v6();virtual void v7();
    virtual void v8();virtual void v9();virtual void v10();virtual void v11();
    virtual void v12();virtual void v13();virtual void v14();virtual void v15();
    virtual VirtualChild230_24* value();
};
struct Object24F5_24 {char pad[0x480];u32 state;char pad484[0x4c0-0x484];Timer24 timer;};
struct ActorPrimary20_24 {
    virtual void v0();virtual void v1();virtual void v2();virtual ~ActorPrimary20_24();
    virtual void v5();virtual void v6();virtual void v7();virtual void v8();
    virtual void v9();virtual void v10();virtual void v11();virtual void v12();
    virtual void v13();virtual void v14();virtual void v15();virtual void v16();
    virtual void v17();virtual void v18();virtual void v19();
    char pad[0x320-4];
};
struct ActorSecondary24 {virtual void v0();char pad[0x41c-0x324];};
struct ActorBase20_24:ActorPrimary20_24,ActorSecondary24 {virtual ~ActorBase20_24();}; // original D1: 001510A4
struct Member4EE540_24 {~Member4EE540_24();char pad[0x68];}; // original D1: 004EE540
struct WordArray32_24 {u32 a[32];void fill(u32 z){for(s32 i=0;i<32;++i)a[i]=z;}};
struct Object19B4_24 {char pad[0x1c8];WordArray32_24 words;};
inline bool advanceEnd24(u32&cur,u32 max){if(cur<max)++cur;return cur>=max;}
inline void copyVec24(Vec3_24*d,const Vec3_24&s){*d=s;}
inline void copyVecValue24(Vec3_24*d,Vec3_24 s){*d=s;}
struct Array15_24{u32 data[15];u32&operator[](u32 i){if(i<15)return data[i];return data[0];}};
struct Object229D24{char pad[0x8c0];Array15_24 values;char pad8fc[0xc78-0x8fc];Array15_24 indices;u32 count;};
struct ActorPrimary19_24{virtual void f0();virtual void f1();virtual void f2();virtual~ActorPrimary19_24();virtual void f5();virtual void f6();virtual void f7();virtual void f8();virtual void f9();virtual void f10();virtual void f11();virtual void f12();virtual void f13();virtual void f14();virtual void f15();virtual void f16();virtual void f17();virtual void f18();char pad[0x320-4];};
struct ActorBase19_24:ActorPrimary19_24,ActorSecondary24{virtual~ActorBase19_24();}; // 1510A4
struct Member36CB64_24{~Member36CB64_24();char pad[0x110];};
struct LookupResult15C24{s8 flag;char pad1[11];void*found;};
struct GameActors24{char pad[0x3dbbc];u32 actors[4];};
struct SafeString24{const char*text;SafeString24(const char*s):text(s){}virtual~SafeString24(){}virtual void assureTerminationImpl_()const{}};
struct ActorSecondaryF0_24{virtual void f0();char pad[0xec];};
struct ActorBase21_410_24:ActorPrimary20_24,ActorSecondaryF0_24{virtual~ActorBase21_410_24();virtual void f20();}; // 001510A4
struct ActorMid478_24:ActorBase21_410_24{Member4EE540_24 member;virtual~ActorMid478_24(){}};
#endif
