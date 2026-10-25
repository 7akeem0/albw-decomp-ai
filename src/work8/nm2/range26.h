#ifndef GPT26_RANGE_H
#define GPT26_RANGE_H
#include "albw_types.h"
struct Vec3 {
    f32 x, y, z;
    void setZero() { for (int i=0;i<3;++i) (&x)[i]=0.0f; }
    void setXYZ(const Vec3& o) { x=o.x; y=o.y; z=o.z; }
};
struct Sub154 { u32 words[0x48 / 4]; };
struct Obj387 { char pad154[0x154]; Sub154 m154; };
// 34C8F0 copies a request into the embedded status object; descriptive types.
struct Request34C;
extern bool func_0034C8F0(Sub154*, const void*, const Request34C*);
struct State389 { u32 opaque[0x60/4]; };
struct Actor389 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18();
    virtual bool v19(s32*);
    char pad2D7[0x2D7-4]; u8 m2D7;
    char pad40C[0x40C-0x2D8]; State389 m40C; u32 m46C;
};
extern __attribute__((weak)) void func_00667DD0(State389*, s32);
struct PairFloat { f32 m0, m4; };
struct Obj392 { char pad8[8]; PairFloat* m8; u8 mC; };
struct Config394 { u16 m0, m2; f32 m4, m8; u8 mC, mD; u16 mE; };
struct Obj394 { Config394 config; u16 m10, m12; f32 m14; };
struct Virtual10 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(s32);
};
struct Obj3A3 { u32 m0; Virtual10* m4; };
struct Virtual14;
struct Sub918 { char pad918[0x918]; u8 m918; char pad936[0x936-0x919];u8 m936;char padBCC[0xBCC-0x937]; Virtual14* mBCC;void set936(u8 v){m936=v;} };
struct Obj3BE { char pad48[0x48]; Sub918* m48; char pad5C[0x5C-0x4C];s16 m5C;char pad60[2]; s16 m60; u8 m62,m63;char pad90[0x90-0x64];s16 m90; };
struct GlobalLock3D;
extern GlobalLock3D bss_007A8798;
extern void func_003DDBD0(GlobalLock3D*);
struct Resource3E {
    char padE[0xE]; u8 mE; char pad1E[0x1E-0xF]; u16 m1E;
    char pad6C[0x6C-0x20]; u16 m6C;
    void change4(bool v) { m1E = (m1E & ~0x10u) | (u16(v) << 4); }
    void changeByte(u8 v) { u16 flags=m6C; mE=v; m6C=flags|0x20; }
};
struct Obj3E { char pad5[5]; u8 m5; char pad68[0x68-6]; Resource3E* m68; };
struct BitFlag32 { u32 v; void set(u32 mask) { v|=mask; } void reset(u32 mask) { v&=~mask; } };
struct IdPair { u32 first; s32 second; IdPair(u32 a,s32 b):first(a),second(b){} };
struct Obj33C {
    char pad2E0[0x2E0]; BitFlag32 m2E0; char pad3DC[0x3DC-0x2E4]; Vec3 m3DC;
    char pad4B4[0x4B4-0x3E8]; IdPair m4B4; char pad514[0x514-0x4BC]; u8 m514;
};
struct Obj530 { char pad530[0x530]; f32 m530; void reset530(); };
struct Obj604 { char pad604[0x604]; Obj530* m604; };
struct Obj341 { char pad10[0x10]; Obj604* m10; };
struct CtorArg347 { void* owner; f32 value; };
// Base constructor at 002D5C70, returns its this pointer by the ARM C++ ABI.
struct Base347 {
    Base347(const CtorArg347&);
    virtual void v0();
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    char pad70[0x70-4];
};
struct ZeroWord { u32 v; ZeroWord() : v(0) {} };
struct Derived347 : Base347 { ZeroWord m70; Derived347(const CtorArg347&); };
struct First352 { char pad24[0x24]; u32 m24; };
struct Second352 { char pad1C[0x1C]; u32 m1C; };
struct Obj352 { char pad20[0x20]; First352* m20; Second352* m24; };
struct Slot361 { char pad24[0x24]; u8 m24; };
struct Item361 {void* owner;s8 kind;u8 flags[3];u32 opaque;};
struct Owner361 { char pad40C[0x40C]; Slot361 m40C[1];char pad694[0x694-0x431];Item361 items[25];Item361* slotAt(u32 i){Item361* a=items;return &a[i];} };
extern void func_002D455C(Item361*,s32,bool,bool);
struct Controller292;
struct Obj361 {
    char pad10[0x10]; Owner361* m10; Controller292* m14;
    char pad5C8[0x5C8-0x18];void* m5C8;void* m5CC;
};
extern void* func_0054DDF4(Owner361*,u32);
struct Matrix34_26 {f32 values[3][4];};
struct Child364 {char pad100[0x100];f32 value;};
struct Obj364 {char pad4C[0x4C];Child364* child;char padA4[0xA4-0x50];Matrix34_26 matrix;u16 mD4;u8 flag;};
extern void func_001151EC(Matrix34_26*,const Matrix34_26*);
struct StateMgr36B {s32 counter;char opaque[0x20];};
struct Sub36B {u32 opaque;};
struct Child36CC;
struct Obj36CC{char pad8[8];Child36CC* child;char pad74[0x74-0xC];u32 id,state;};
struct Child375 {char pad61[0x61];u8 active;};
struct Obj379:Base347 {ZeroWord m70;u32 m74,m78,m7C,m80;u8 m84;Obj379(const CtorArg347&);};
struct Child39D{char pad158[0x158];f32 value;};
struct Obj39D{char pad410[0x410];s8 kind;char pad4D4[0x4D4-0x411];Child39D* child;char pad508[0x508-0x4D8];bool flag;};
struct Obj375 {char pad450[0x450];Child375* child;char pad494[0x494-0x454];void* target;char pad4A1[0x4A1-0x498];u8 enabled,done;};
extern void func_00375314(Obj375*);
extern bool func_002FCC74(Child36CC*,u16);
struct Obj36B {char pad8BC[0x8BC];StateMgr36B state;char padE60[0xE60-0x8E0];Sub36B sub;};
extern __weak void func_0065836C(StateMgr36B*,s32);
extern void func_0036BE78(Sub36B*);
struct Obj36C {char pad8E8[0x8E8];Sub36B sub;};
extern void func_004FABDC(Obj36C*,s32,s32,u32);
extern void func_0036C09C(Sub36B*,s32);
struct List371 {List371* prev;List371* next;u32 count;List371(){count=0;next=this;prev=this;}};
struct Obj371 {virtual void v0();List371 list;u8 active;Obj371();};
struct Model26;
struct Obj382 {char pad34[0x34];Model26* m34;Model26* m38;};
extern void func_004CF478(Model26*,u32,u32);
struct Obj3897 {char pad460[0x460];Model26* model;char pad480[0x480-0x464];u8 active,done;};
struct Frame389 {
    char pad8[8];f32 current;char pad14[8];f32 end;char pad26[0x26-0x18];u8 changed;
    void set(f32 value);
};
struct Holder389 {char pad14[0x14];Frame389* frame;};
struct Obj389D {char pad468[0x468];Holder389* holder;};
struct Obj3AB {char pad34[0x34];Model26* model;u8 flag38,flag39;u16 m3A;u32 m3C,m40;};
extern void func_004CEA18(Model26*,u32,u32);
extern __softfp bool func_0029218C(Controller292*, s32, f32, bool, f32);
struct Obj372 {
    char pad98C[0x98C]; u8 m98C; char pad998[0x998-0x98D]; s32 m998;
};
struct Obj372F { char pad30[0x30]; u32 m30; };
// Base constructor 0035D69C reads owner+2CC and initializes a 1C-byte object.
struct Manager30D;
struct Base38F {
    Base38F(Actor389*);virtual ~Base38F();virtual void v0();
    char pad14[0x14-4];Manager30D* manager;u32 m18;
};
extern void func_0030DAA0(Manager30D*,Base38F*);
struct Derived38F : Base38F { Actor389* m1C; Derived38F(Actor389*); };
struct Derived36D : Base38F { u32 m1C,m20,m24; Derived36D(Actor389*); };
struct Obj36E {u32 m0,m4,m8,mC;char pad68[0x68-0x10];u8 m68,m69,m6A,m6B,m6C,m6D;};
struct Source36E {char pad3D0[0x3D0];u32 m3D0,m3D4,m3D8;};
struct Sub5C0 { u32 opaque; };
struct Obj393 { char pad584[0x584]; void* m584; char pad5C0[0x5C0-0x588]; Sub5C0 m5C0; };
extern void func_00151148(void*, s32);
extern void func_00393164(Sub5C0*);
struct CounterPair { u32 cur,max; bool isEnd() const { CounterPair t=*this; return t.cur>=t.max; } };
struct Obj39A { char pad158[0x158]; CounterPair m158; };
extern void func_0039A8C8(Obj39A*, f32);
struct Sub1C { u32 opaque[(0x48-0x1C)/4]; };
struct Obj3B0 { char pad1C[0x1C]; Sub1C m1C; u8 m48; };
extern void func_00669498(Sub1C*, s32);
struct Virtual14 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5();
};
struct Obj3C2 { char pad30[0x30]; s32 m30; char pad54[0x54-0x34]; u32 m54,m58; };
struct List3DA {
    List3DA* prev; List3DA* next; void* heap; void* source; void* user;
    void reset();
    List3DA(void*, void*);
};
struct Cache32C { u32 opaque[0xD8/4]; };
struct Obj32C { char pad8C4[0x8C4]; Cache32C caches[2]; };
extern void func_0032C750(Cache32C*, Vec3*, u32);
struct Obj34F { char pad2B8[0x2B8]; u8 m2B8; char align2BC[3]; Vec3 m2BC; };
// Same num/ptrs/freeHint/end layout as work5/shared_include/en210_a15.h.
struct ActorMgr26 { u32 num; Actor389** ptrs; u32 freeHint; Actor389** end; };
struct Game26 { char pad3DBBC[0x3DBBC]; ActorMgr26 actors; };
extern Game26* data_00706E20;
typedef void (*ActorCallback26)(Actor389*, void*);
extern void func_0011FB3C(Actor389*, void*);
extern void func_0052FD7C(ActorMgr26*, ActorCallback26, void*);
struct Timer26 {
    u32 cur,max;f32 rate;
    void start(u32 n,u32 c=0){max=n;if(n)rate=1.0f/n;else rate=0.0f;cur=c;}
};
struct Obj35C {
    char pad490[0x490]; s8 m490; char pad4A8[0x4A8-0x491]; f32 m4A8;
    char pad52C[0x52C-0x4AC];Timer26 timer;
};
extern void func_003253F0(Obj35C*);
extern void func_003252B8(Obj35C*, f32, s32);
extern void func_00120740(Actor389*, void*);
struct Obj36F { char pad64[0x64]; u32 m64; char pad6A[2]; s8 m6A; };
extern void func_0032A2C0(void*, s32, s32);
struct Ctrl231 { s16 kind,index; u32 frame; void* owner; void init(void*,s16,s16); };
struct StateMgr376 {char opaque[0x24];};
struct Obj376 {
    char pad1C[0x1C]; void* m1C; char pad38[0x38-0x20];StateMgr376 state;
    Ctrl231 m5C;
};
extern void func_002317C0(Ctrl231*, f32);
extern bool func_00532C78(Ctrl231*);
extern __weak void func_00667638(StateMgr376*,s32);
struct StateMgr37E {u32 opaque;};
struct Obj37E {char padA48[0xA48];StateMgr37E state;u8 flag;};
extern void func_004FC164(Obj37E*);
extern bool func_0058A8F0(Obj37E*);
extern __weak void func_006678C0(StateMgr37E*,s32);
struct Obj388 {char padA06[0xA06];u8 active;};
struct Data388;
extern Data388 data_0070DA08;
extern void func_001E6A6C(Obj388*,const Data388*);
extern void func_001E6AB4(Obj388*);
struct Obj398 {char pad34[0x34];void* m34;};
extern void func_003AB994(Obj398*,void*);
extern void func_003AB8DC(Obj398*,void*);
extern void func_0039847C(Obj398*);
struct Obj3A06 {char pad398[0x398];s32 value;};
struct StateMgr3AA {u32 opaque;};
struct Obj3AA {char pad210[0x210];StateMgr3AA state;};
extern void func_0048E128(Obj3AA*,s32,s32,s32);
extern __weak void func_00668E44(StateMgr3AA*,s32);
struct Random26;
extern u32 func_00111A64(Random26*);
struct Random26 {
    u32 below(u32 bound) {return (u32)(((unsigned long long)func_00111A64(this)*bound)>>32);}
};
extern Random26* func_0058A7D4(Actor389*);
struct Obj3B1 {char pad48[0x48];Actor389* actor;char pad5E[0x5E-0x4C];u16 timer;};
struct StateMgr3B6 {char opaque[0x40];};
struct Obj3B6 {char pad20[0x20];StateMgr3B6 state;Ctrl231 ctrl;};
struct Control3C3 {u32 opaque;};
struct Actor3C3 {char pad8C0[0x8C0];Control3C3 control;char padAF4[0xAF4-0x8C4];u16 kind;};
struct Obj3C3 {char pad48[0x48];Actor3C3* actor;};
extern void func_003842C0(Control3C3*,s32,s32,bool);
extern __svc(0x23) u32 closeHandle26(u32);
struct Handle26 {
    u32 value;
    ~Handle26(){if(value){closeHandle26(value);value=0;}}
};
struct OwnerHandle26 {u32 m0;Handle26 handle;~OwnerHandle26();};
struct OwnerHandle0 {Handle26 handle;~OwnerHandle0();};
struct StandaloneHandle26 {u32 value;~StandaloneHandle26();};
struct Pair3D22 {u32 a,b;Pair3D22(const Pair3D22*);};
extern void func_0010BB00(Pair3D22*,const Pair3D22*);
extern void func_0058FB28(Pair3D22*);
struct Holder3D30 {void* value;};
struct Obj3D30 {char pad18[0x18];Holder3D30 holder;};
extern void func_003D3254(Holder3D30*);
struct ByteValue26 {u8 value;ByteValue26(u8 v):value(v){}};
struct Record3DC2 {u32 a,b,c;u8 d;ByteValue26 e;u8 f,g;Record3DC2();};
struct Global3DD {char pad8[8];u8 value;char pad30[0x30-9];u8 locked;void set(u8);};
extern Global3DD* func_003DCE04();
extern s32 func_0010ADF0();
struct Context3E37;
extern Context3E37* func_0010AF18();
extern u32 func_003E3DB0(Context3E37*);
struct Obj32C3 {char pad59C[0x59C];BitFlag32 flags;char padA90[0xA90-0x5A0];void* value;char padC8C[0xC8C-0xA94];u32 timer;};
extern void func_004F88A0(Obj32C3*,void*);
struct Child35B;
struct Obj35B {char pad430[0x430];void* m430;u32 m434;Child35B* m438;};
extern void func_00169A80(Child35B*);
extern void func_00168E9C(Child35B*,void*,bool);
struct Sub3DDB {u32 opaque[3];};
struct Obj3DDB {u8 initialized;char pad34[0x33];Sub3DDB sub;};
extern void func_0010DEB0(Sub3DDB*);
struct Obj3E16 {u32 id;char padC[8];u8 done;};
extern void func_003DF2D8(GlobalLock3D*,u32);
extern bool func_00532BA0(Ctrl231*);
extern __weak void func_006695DC(StateMgr3B6*,s32);
struct Vec2 { f32 x,y; Vec2(f32 a,f32 b):x(a),y(b){} void set(f32,f32); };
struct Obj38A { char pad20[0x20]; Vec2 m20; u32 m28; };
struct State3A { char padC[0xC]; u8 value; };
struct Owner3A { char pad8C0[0x8C0]; u8 kind, unknown, value; };
struct Obj3DCB { u8 engaged; char padC[11]; f32 values[4]; };
extern void func_003DDF70(GlobalLock3D*,u32,f32);
struct Obj3DE0 { char pad32[0x32]; s16 mode; };
extern GlobalLock3D bss_007A06F0;
extern void func_003DF430(GlobalLock3D*,s32);
struct Record3DE {
    u32 a,b,c,d;
    union {u32 e; struct {u8 lo,flag;u16 hi;} bytes;} state;
    u32 f;
};
struct StateMgr32A { u32 opaque; };
struct Ctrl32A {char opaque[0x6C];};
struct Sub32AA {u32 opaque;};
struct Obj32A {
    char pad8C4[0x8C4];u32 m8C4;char pad8F8[0x8F8-0x8C8];Ctrl32A ctrl;
    char padAA0[0xAA0-0x964];Sub32AA sub;
    char padBA8[0xBA8-0xAA4];StateMgr32A state;
    char padC60[0xC60-0xBAC];u32 timer;char padC93[0xC93-0xC64];u8 flag;
};
extern void func_0036E490(Ctrl32A*,s32,u32);
extern void func_0036BE48(Sub32AA*);
extern bool func_0032AFC8(Obj32A*);
extern __weak void func_00665670(StateMgr32A*,s32);
struct Primary339 {
    virtual ~Primary339();
    virtual void v0();virtual void v1();virtual void v2();virtual void v3();
    virtual void v4();virtual void v5();virtual void v6();virtual void v7();
    virtual void v8();virtual void v9();virtual void v10();virtual void v11();
    virtual void v12();virtual void v13();virtual void v14();virtual void v15();virtual void v16();
    char pad320[0x31C];
};
struct Secondary339 { virtual ~Secondary339(){} char pad140[0x13C]; };
struct Base339:Primary339,Secondary339 { virtual ~Base339(); };
struct Member4EE { virtual ~Member4EE(); char opaque[0x5C]; };
struct Derived339:Base339 { Member4EE member; virtual ~Derived339(); };
struct Primary3AE{virtual ~Primary3AE();virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();virtual void v16();char pad18[0x14];};
struct Secondary3AE{virtual ~Secondary3AE(){}char pad98[0x94];};
struct Base3AE:Primary3AE,Secondary3AE{virtual ~Base3AE();};
struct Member491{virtual ~Member491();};
struct Derived3AE:Base3AE{Member491 member;virtual ~Derived3AE();};
struct Interface3C8 {
    virtual void v0();virtual void v1();virtual void v2();virtual u32 v3(u32*);
};
struct IpcRequest26 {u32 header,result;};
extern __svc(0x32) u32 sendSyncRequest26(u32);
struct OwnerHandle14 {u32 opaque[5];Handle26 handle;u8 owned;~OwnerHandle14();};
extern void func_00108250(OwnerHandle14*);
struct Manager3D2;
struct Global3D2 {u32 m0,m4;Manager3D2* manager;};
extern Global3D2 data_007158E8;
extern u32 func_003D2EA8(Manager3D2*,u32*);
struct Request3D6 {char pad8[8];u8 kind,unused;union{u8 mode;u16 id;};};
struct RequestHolder3D6 {Request3D6* request;};
struct Owner3D6 {char pad10[0x10];u32 count;};
struct Obj3DCC {char pad30[0x30];s32 count;};
struct Ctrl337 {u32 opaque;};
struct FlagState337 {char pad94[0x94];u8 flag;u8 read()const;};
struct Obj337 {char pad5FC[0x5FC];Ctrl337 ctrl;char pad700[0x700-0x600];FlagState337 state[1];};
extern void func_003A53B0(Ctrl337*,s32);
extern void func_001E6CE8(Obj337*);
extern s32 func_003DF384(GlobalLock3D*);
extern void func_004FA114(Sub918*);
struct Virtual138 {
    virtual void v0();virtual void v1();virtual void v2();virtual void v3();
    virtual void v4();virtual void v5();virtual void v6();virtual void v7();
    virtual void v8();virtual void v9();virtual void v10();virtual void v11();
    virtual void v12();virtual void v13();virtual void v14();virtual void v15();
    virtual void v16();virtual void v17();virtual void v18();virtual void v19();
    virtual void v20();virtual void v21();virtual void v22();virtual void v23();
    virtual void v24();virtual void v25();virtual void v26();virtual void v27();
    virtual void v28();virtual void v29();virtual void v30();virtual void v31();
    virtual void v32();virtual void v33();virtual void v34();virtual void v35();
    virtual void v36();virtual void v37();virtual void v38();virtual void v39();
    virtual void v40();virtual void v41();virtual void v42();virtual void v43();
    virtual void v44();virtual void v45();virtual void v46();virtual void v47();
    virtual void v48();virtual void v49();virtual void v50();virtual void v51();
    virtual void v52();virtual void v53();virtual void v54();virtual void v55();
    virtual void v56();virtual void v57();virtual void v58();virtual void v59();
    virtual void v60();virtual void v61();virtual void v62();virtual void v63();
    virtual void v64();virtual void v65();virtual void v66();virtual void v67();
    virtual void v68();virtual void v69();virtual void v70();virtual void v71();
    virtual void v72();virtual void v73();virtual void v74();virtual void v75();
    virtual void v76();virtual void v77();virtual void v78(s32,bool);virtual bool v79(s32,bool);
};
struct Obj3B39:Virtual138 {char pad48[0x44];Sub918* child;};
extern void func_001E6CE8(Obj3B39*);
extern void func_003B8E10(Obj3BE*);
struct Obj3BCE {u32 word;Actor389* actor;char pad38[0x30];u16 timer;u8 active;};
struct Interface3C8Cleanup {
    virtual void v0();virtual void v1();virtual void v2();virtual void v3();
    virtual void v4();virtual u32 v5();
};
struct Tagged3C8 {
    u32 value;
    void clearOwner(){value&=~1u;}
    Interface3C8Cleanup* get()const;
};
struct Request3D355 {u32 value;s8 a,b,unused,c,d,e;s16 f;};
struct Obj3D355;
extern void func_003D3588(Obj3D355*,u32,s32,s32,s32,s32,s32,s32);
struct Obj37C32{char pad40[0x40];f32 a,b;u8 state,changed;};
struct State3BD{u32 opaque;};
struct Obj3BD:Virtual138{char pad6C[0x6C-4];State3BD state;};
extern void func_00669AEC(State3BD*,s32);
extern void func_00669C30(State3BD*,s32);
extern void func_0066A140(State3BD*,s32);
struct Obj3C425:Virtual138{char pad48[0x48-4];Actor389* actor;u32 timer;};
struct IpcOutput26{u32 header,result,unused,value;};
typedef unsigned long long u64;
struct IpcOutput64_26{u32 header,result;u64 value;};
struct Service3C7;
extern Service3C7* data_00716134;
extern u32 func_003C7E50(Service3C7*,u32);
extern void func_003D302C(u32,u32);
struct Result26{u32 value;};
extern void func_0010AC24(u32,u32);
extern u32 func_00108630(void*,u32,u32);
struct IpcHalf26{u32 header;union{u32 result;u16 input;};};
struct State3327 {u32 opaque;};
struct Obj3327{char pad48[0x48];f32 kind;char pad4C0[0x4C0-0x4C];State3327 state;char pad516[0x516-0x4C4];u8 flag;};
extern __weak void func_006657B4(State3327*,s32);
struct Resource34BA;
struct Manager4B94;
struct Obj3695{char pad3C[0x3C];Resource34BA* child;char padF5[0xF5-0x40];u8 flags;};
extern void func_0034BA3C(Resource34BA*,const void*,const void*);
extern void func_004B948C(Manager4B94*,Resource34BA*);
extern Obj361* data_0070FB60;
extern void func_00361658(Obj361*);
struct Scene36CC{char padA0[0xA0];u8 active;};
extern Scene36CC* data_0070A518;
struct Virtual54 {
    virtual void v0();virtual void v1();virtual void v2();virtual void v3();
    virtual void v4();virtual void v5();virtual void v6();virtual void v7();
    virtual void v8();virtual void v9();virtual void v10();virtual void v11();
    virtual void v12();virtual void v13();virtual void v14();virtual void v15();
    virtual void v16();virtual void v17();virtual void v18();virtual void v19();
    virtual void v20();virtual bool v21(const void*);
};
struct Obj36D51;
extern Virtual54* func_00557B10(Obj36D51*);
struct ModelResource26{char pad14[0x14];Matrix34_26* matrices;};
struct Model26{char pad24[0x24];ModelResource26* resource;char pad80[0x80-0x28];Matrix34_26 matrix;char pad164[0x164-0xB0];BitFlag32 flags;};
struct Obj773{u32 opaque;Model26* model;};
struct Source773{char pad600[0x600];Model26* model;};
extern const Matrix34_26* func_0053ED3C(Model26*);
extern void func_004CEAF0(Model26*);
struct Actor79A{char pad40C[0x40C];Model26* model;};
struct Pair79A{Actor79A* actor;u32 index;};
struct Obj79A{u32 opaque;Pair79A pair;Matrix34_26 matrix;};
#endif
