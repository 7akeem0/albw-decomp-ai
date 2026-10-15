// agent2 round 5: copy of work4/agent8/actor1e4.h; #define A1E4_INLINE_DTOR for an inline ~Actor1E4 (derived D1 dtors inline it: vt ro_6E0B24 store + ~Mem410 + b 0x1510A4)
// agent8: common actor class whose methods live at 0x1E4000..0x1E5000 (vtable ro_6E0B24, 21 primary slots,
// 2nd base vptr @0x320 = vt+0x5c). Same object as GPT's HandleObjT (s8 alive flag @0x4F1).
#ifndef A2_ACTOR1E4_H
#define A2_ACTOR1E4_H

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef signed int s32;
typedef float f32;

struct Vec3 {
    f32 x, y, z;
    void setSub(const Vec3& a, const Vec3& b);   // 0x115C70
};

struct ActorBaseA {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual ~ActorBaseA();
    virtual void v5();  virtual void v6();  virtual void v7();  virtual void v8();
    virtual void v9();  virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    u32 m4;
    Vec3 m8;
    char padA[0x2d7 - 0x14];
    u8 m2D7;
    char padA2d8[0x2e0 - 0x2d8];
    u32 m2e0;
    char padA2[0x320 - 0x2e4];
};
struct ActorBaseB {
    virtual void b0();  virtual void b1();  virtual void b2();  virtual void b3();
    virtual void b4();  virtual void b5();  virtual void b6();  virtual void b7();
    virtual void b8();  virtual void b9();  virtual void b10(); virtual void b11();
    virtual void b12(); virtual void b13();   // 0x34
    char padB[0x3a0 - 0x324];
    u32 m3A0;
    char padB3a4[0x3d0 - 0x3a4];
    Vec3 m3D0;                                // 0x3d0 pos
    Vec3 m3DC;
    s32 m3E8;                                 // 0x3e8 angle
    char padB3ec[0x40c - 0x3ec];
};
class ActorBase : public ActorBaseA, public ActorBaseB {
public:
    virtual ~ActorBase();      // 0x1510A4
    void setFlag2();           // 0x1E48E4
};

struct Obj4 { void update(); };                 // update = 0x4356B4
struct Mem410 { ~Mem410(); u8 pad[0x478 - 0x410]; };  // dtor 0x4EE540

struct Sub14 { char pad[8]; f32 m8; char padc[4]; f32 m10; char pad14[0x26 - 0x14]; u8 m26; };
// fields read through volatile: orig keeps a dead 'ldr r1,[r0,#0xc]' before 'ldr r0,[r0,#0x14]'
struct Ctl48C {
    char pad[0xc];
    volatile s32 mC;
    char pad10[4];
    Sub14* volatile m14;
    Sub14* get() { s32 n = mC; return m14; }
};

void* func_0014E904(void* actor, s32 a, s32 b);
// 0x5C-byte stack request, out-of-line ctor 0x2C11E8(this, id, s32 m54, u8 m58)
struct AnimReq {
    AnimReq(s32 id, s32 a, u8 b);
    s32 m0;
    s32 m4;
    void* m8;
    u8 buf[0x54 - 0xc];
    s32 m54;
    u8 m58;
};
struct Ctl48C;
void func_0016898C(Ctl48C* c, const AnimReq& r);
void func_00168E9C(Ctl48C* c, u32 id, s32 z);
void func_00169A80(Ctl48C* c);
void func_0016A02C(Ctl48C* c, s32 a, s32 b, s32 z);
struct Mgr70FB60;
extern Mgr70FB60* data_0070FB60;
void* func_005568E8(Mgr70FB60* m);
s32 func_002FCC74(void* p);
void func_004CF51C(void* p);

class Actor1E4 : public ActorBase {
public:
#ifdef A1E4_INLINE_DTOR
    virtual ~Actor1E4() {}
#else
    virtual ~Actor1E4();
#endif
#ifdef A1E4_EXTRA
    A1E4_EXTRA
#endif
    void play(Ctl48C*& c) { func_00168E9C(c, m47C, 0); }
    void restart(Ctl48C*& c) {
        if (c) {
            func_00169A80(c);
            play(c);
        }
    }
    u32 m40C;
    Mem410 m410;
    void* m478;
    u32 m47C;
    Obj4* m480;
    u32 m484;
    void* m488;
    Ctl48C* m48C;
    Ctl48C* m490;
    char pad494[0x4cc - 0x494];
    u8 m4CC;
    char pad4cd[0x4dc - 0x4cd];
    s32 m4DC;
    char pad4e0[0x4f1 - 0x4e0];
    s8 m4F1;
};

#endif
