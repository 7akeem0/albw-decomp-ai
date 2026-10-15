// 0x1DEA54  Cls::Cls(ActorParam*)  (Player-side class, vtable ro_6D1A88, 2nd base @0x320 vt+0x5c)
typedef unsigned int u32;
typedef signed int s32;
typedef unsigned short u16;
typedef short s16;
typedef unsigned char u8;
typedef signed char s8;
typedef float f32;

struct NoThrow {
    NoThrow() {}
    u32 pad;
};
void* operator new(unsigned int size, NoThrow) throw();
struct T2 { u8 pad; };
void* operator new(unsigned int size, T2) throw();
#define nt (NoThrow())

namespace sead {
namespace RuntimeTypeInfo {
class Interface {
public:
    Interface() {}
    virtual bool isDerived(const Interface* typeInfo) const = 0;
};
class Root : public Interface {
public:
    Root() {}
    virtual bool isDerived(const Interface* typeInfo) const;
};
}  // namespace RuntimeTypeInfo
}  // namespace sead

struct Vec3 {
    Vec3() {}
    Vec3(f32 ax, f32 ay, f32 az) : x(ax), y(ay), z(az) {}
    f32 x, y, z;
};
struct Word { u32 v; };
struct Handle { Handle() : v(0) {} u32 v; };

struct ActorParam;
struct Obj2D0 { char pad[0x18]; char m18[1]; };

// root actor (ctor 0x4ED00C), 21 primary virtual slots in Cls's vtable
struct ActorBaseA {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual ~ActorBaseA();
    virtual void v5();  virtual void v6();  virtual void v7();  virtual void v8();
    virtual void v9();  virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    void func_004ECF6C();
    char pad004[0x2d0 - 4];
    Obj2D0* m2d0;
    char pad2d4[0x2e0 - 0x2d4];
    u32 m2e0;
    char pad2e4[0x320 - 0x2e4];
};
struct ActorBaseB {
    virtual void b0();
};
class ActorBase : public ActorBaseA, public ActorBaseB {
public:
    ActorBase(ActorParam* p);  // 0x150E40
    virtual ~ActorBase();
    char pad324[0x3e8 - 0x324];
    Word m3e8;
    char pad3ec[0x40c - 0x3ec];
};

class Cls;
// 0x40C: per-player context (ctor 0x255D48(this, owner)), 0x18C bytes
struct Core {
    Core(Cls* owner);
    char pad[0x18c];
};
// 0x598: hearts {cur, max, tick}
struct Life {
    Life();  // 0x149D2C
    u8 mCur;
    u8 mMax;
    u8 mTick;
};
// 0x5AC: 0x18 bytes, reset() = 0x1E45E0
struct Sub5AC {
    Sub5AC() : m14(0) { reset(); }
    void reset();
    u8 m0, m1, m2, m3;
    f32 m4, m8, mC, m10;
    u32 m14;
};
struct Item12 {
    Item12();  // 0x2D4678
    void init(Cls* owner, s8 idx);  // 0x2D4404
    char pad[12];
};
struct Slots { Item12 a[3]; };
struct Empty6B8 {
    Empty6B8();
    u8 v;
};
struct Sub6E4 {
    Sub6E4();  // 0x1E6898
    char pad[0x28];
};

struct X5F4 { X5F4(); char pad[0x3dc8]; };
struct X5F8 { X5F8(Cls* o); char pad[0x3c]; };
struct X5FC { X5FC(Cls* o); char pad[0x38]; };
struct X600 { X600(Cls* o); char pad[0x144]; };
struct X604 { X604(Cls* o); char pad[0x53c]; };
struct X608 { X608(Cls* o); char pad[0x5d4]; };
struct X610 { X610(Cls* o); char pad[0x20]; };
struct X614 { X614(Cls* o); char pad[0x17c]; };
struct X618 { X618(Cls* o, X614* p); char pad[0x34]; };
struct X61C { X61C(u32 v); char pad[0x3c]; };

struct Obj711010 { char pad[0x10]; u32 m10; };
extern Obj711010* data_00711010;
struct Obj70FB60;
extern Obj70FB60* data_0070FB60;
struct SoundMgr;
extern SoundMgr* data_00711F50;

void func_003614CC(int);
void func_003613F0(Obj70FB60* a, Cls* b, X614* c);
void* func_0054D8B0(void* a, Cls* b, int c);
void func_0014A0E8(SoundMgr* mgr, Cls* c);

// player parts (base ctor 0x2D43C8(this, Core*), 0x1C bytes)
struct Part {
    Part(Core* c);
    virtual bool checkDerivedRuntimeTypeInfo(const sead::RuntimeTypeInfo::Interface* t) const;
    u32 m4;
    Core* m8;
    u32 mC[3];
    u8 m18;
    u8 pad19[3];
};

struct P00 : Part { P00(Core* c) : Part(c) {} virtual void f(); char pad[0x10]; };
struct P01 : Part { P01(Core* c) : Part(c) {} virtual void f(); };
struct P02 : Part { P02(Core* c) : Part(c) {} virtual void f(); };
struct P03 : Part { P03(Core* c) : Part(c) {} virtual void f(); };
struct P04 : Part {
    P04(Core* c) : Part(c) {}
    virtual void f();
    static const sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfoStatic() {
        static const sead::RuntimeTypeInfo::Root typeInfo;
        return &typeInfo;
    }
};
template <typename T>
inline bool IsDerivedFrom(const Part* obj) {
    const sead::RuntimeTypeInfo::Interface* ti = T::getRuntimeTypeInfoStatic();
    return obj != 0 && obj->checkDerivedRuntimeTypeInfo(ti);
}
template <typename T>
inline T* DynamicCast(Part* obj) {
    if (IsDerivedFrom<T>(obj))
        return static_cast<T*>(obj);
    return 0;
}
struct P05 : Part {
    P05(Core* c, P04* p) : Part(c), m1c(p), m20(-1), m24(0.0f, 0.0f, 0.0f) {}
    virtual void f();
    P04* m1c;
    s32 m20;
    Vec3 m24;
};
struct P06 : Part { P06(Core* c) : Part(c) {} virtual void f(); };
struct P07 : Part { P07(Core* c) : Part(c) {} virtual void f(); u32 m1c; };
struct P08 : Part { P08(Core* c) : Part(c), m1c(-1) {} virtual void f(); s32 m1c; };
struct P09 : Part { P09(Core* c) : Part(c), m1c(0) {} virtual void f(); s32 m1c; };
struct P10 : Part { P10(Core* c) : Part(c) { m28 = 0; m24 = 0; m20 = 0; m1c = 0; } virtual void f(); s32 m1c, m20, m24, m28; };
struct Delegate1C {
    Delegate1C(void* o) : mObj(o), m8(-1) {}
    virtual void invoke();
    void* mObj;
    s32 m8;
};
struct P11 : Part {
    P11(Core* c) : Part(c), m1c(this), m2c(0), m30(-1), m34(0), m38(0), m3c(0.0f, 0.0f, 0.0f), m48(0.0f, 0.0f, 0.0f), m54(0.0f), m58(0.0f), m5c(0.0f) {}
    virtual void f();
    Delegate1C m1c;
    u32 m28;
    u8 m2c;
    s32 m30;
    s32 m34;
    s32 m38;
    Vec3 m3c;
    Vec3 m48;
    f32 m54, m58, m5c;
};
struct P12 : Part { P12(Core* c) : Part(c) {} virtual void f(); };
struct P13 : Part { P13(Core* c) : Part(c) {} virtual void f(); u32 m1c; };
struct P14 : Part { P14(Core* c) : Part(c) {} virtual void f(); };
struct P15 : Part { P15(Core* c) : Part(c) {} virtual void f(); };
struct P16 : Part { P16(Core* c) : Part(c), m1c(0) {} virtual void f(); u8 m1c; };
struct P17 : Part { P17(Core* c) : Part(c), m1c(0) {} virtual void f(); u8 m1c; };
struct P18 : Part { P18(Core* c, bool b) : Part(c), m1c(b) {} virtual void f(); bool m1c; };
struct P20 : Part { P20(Core* c) : Part(c) {} virtual void f(); };
struct Pair20 {
    Pair20(f32 a);  // 0x14D9B4
    f32 a, b;
};
struct P21 : Part { P21(Core* c, bool b) : Part(c), m1c(b), m20(1.0f), m28(0) {} virtual void f(); bool m1c; Pair20 m20; u32 m28; };
struct P23 : Part { P23(Core* c) : Part(c) {} virtual void f(); };
struct P24 : Part { P24(Core* c) : Part(c) {} virtual void f(); };

class Cls : public ActorBase {
public:
    Cls(ActorParam* p);
    Item12* slotAt(int i) { Item12* a = m694.a; return &a[i]; }
    virtual ~Cls();

    Core m40c;
    Life m598;
    Vec3 m59c;
    f32 m5a8;
    Sub5AC m5ac;
    char pad5c4[0x5f4 - 0x5c4];
    X5F4* m5f4;
    X5F8* m5f8;
    X5FC* m5fc;
    X600* m600;
    X604* m604;
    X608* m608;
    void* m60c;
    X610* m610;
    X614* m614;
    X618* m618;
    X61C* m61c;
    Handle m620;
    Handle m624;
    Handle m628;
    Handle m62c;
    Part* m630[25];
    Slots m694;
    Empty6B8 m6b8;
    u8 m6b9, m6ba, m6bb, m6bc, m6bd, m6be, m6bf, m6c0, m6c1, m6c2, m6c3, m6c4, m6c5, m6c6, m6c7, m6c8;
    f32 m6cc;
    f32 m6d0;
    u32 m6d4;
    u32 m6d8;
    u32 m6dc;
    u32 m6e0;
    Sub6E4 m6e4;
    Vec3 m70c;
    f32 m718;
    Word m71c;
    f32 m720;
    f32 m724;
};

Cls::Cls(ActorParam* p)
    : ActorBase(p), m40c(this), m598(), m59c(0.0f, 0.0f, 0.0f), m5a8(1.0f), m5ac(),
      m5f4(new (nt) X5F4()), m5f8(new (nt) X5F8(this)), m5fc(new (nt) X5FC(this)), m600(new (nt) X600(this)),
      m604(new (nt) X604(this)), m608(new (nt) X608(this)), m60c(0), m610(new (nt) X610(this)),
      m614(new (nt) X614(this)), m618(new (nt) X618(this, m614)), m61c(new (nt) X61C(data_00711010->m10)),
      
      m6b9(0), m6ba(0), m6bb(0), m6bc(1), m6bd(0), m6be(0), m6bf(0), m6c0(0), m6c1(0), m6c2(0), m6c3(0), m6c4(0),
      m6c5(0), m6c6(0), m6c7(0), m6c8(0), m6cc(3.4028235e38f), m6d0(1.0f), m6d4(0), m6dc(0),
      m70c(0.0f, 0.0f, 0.0f), m718(0.07f), m71c(m3e8), m720(-9999.0f), m724(0.0f) {
    T2 t;
    m2e0 |= 2;
    func_004ECF6C();
    for (int i = 0; i < 3; i++)
        slotAt(i)->init(this, i);
    func_003614CC(0);
    func_003613F0(data_0070FB60, this, m614);
    m60c = func_0054D8B0(m2d0->m18, this, 0);
    for (int i = 0; i < 25; i++)
        m630[i] = 0;
    m630[0] = new (t) P00(&m40c);
    m630[1] = new (t) P01(&m40c);
    m630[2] = new (t) P02(&m40c);
    m630[3] = new (t) P03(&m40c);
    m630[4] = new (t) P04(&m40c);
    m630[5] = new (t) P05(&m40c, DynamicCast<P04>(m630[4]));
    m630[6] = new (t) P06(&m40c);
    m630[7] = new (t) P07(&m40c);
    m630[8] = new (t) P08(&m40c);
    m630[9] = new (t) P09(&m40c);
    m630[10] = new (t) P10(&m40c);
    m630[11] = new (t) P11(&m40c);
    m630[12] = new (t) P12(&m40c);
    m630[13] = new (t) P13(&m40c);
    m630[14] = new (t) P14(&m40c);
    m630[15] = new (t) P15(&m40c);
    m630[16] = new (t) P16(&m40c);
    m630[17] = new (t) P17(&m40c);
    m630[19] = new (t) P18(&m40c, false);
    m630[18] = new (t) P18(&m40c, true);
    m630[20] = new (t) P20(&m40c);
    m630[20] = new (t) P20(&m40c);
    m630[21] = new (t) P21(&m40c, true);
    m630[22] = new (t) P21(&m40c, false);
    m630[23] = new (t) P23(&m40c);
    m630[24] = new (t) P24(&m40c);
    func_0014A0E8(data_00711F50, this);
}
