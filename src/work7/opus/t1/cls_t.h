#ifndef GPT_PLAYER_CALC_TYPES_H
#define GPT_PLAYER_CALC_TYPES_H

// Recovered partial layout for this translation unit. See ../REPORT.md.
#include "../../../work4/gpt/include/gpt_types.h"

namespace sead {
class SafeString {
public:
    SafeString(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};

namespace RuntimeTypeInfo {
class Interface {
public:
    Interface() {}
    virtual bool isDerived(const Interface* typeInfo) const = 0;
};
template <typename T>
class Root : public Interface {
public:
    Root() {}
    virtual bool isDerived(const Interface* typeInfo) const;
};
}
}

struct HandleObj {
    virtual bool checkDerivedRuntimeTypeInfo(const sead::RuntimeTypeInfo::Interface* t) const;
};

struct HandleObjT : public HandleObj {
    char pad[0x4f1 - 4];
    s8 m4f1;
    static const sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfoStatic() {
        static const sead::RuntimeTypeInfo::Root<HandleObjT> typeInfo;
        return &typeInfo;
    }
};

template <typename T>
inline bool IsDerivedFrom(const HandleObj* obj) {
    const sead::RuntimeTypeInfo::Interface* ti = T::getRuntimeTypeInfoStatic();
    return obj != 0 && obj->checkDerivedRuntimeTypeInfo(ti);
}
template <typename T>
inline T* DynamicCast(HandleObj* obj) {
    if (IsDerivedFrom<T>(obj))
        return static_cast<T*>(obj);
    return 0;
}

struct HandleMgr {};
HandleObj* func_0052FBA0(HandleMgr* mgr, u32 handle);

struct Game {
    char pad[0x3dbbc];
    HandleMgr handles;
};
extern Game* data_00706E20;

struct Actor { bool isKind(int x)const{return m20==x;}
    char pad0[0x20];
    u8 m20;
    char pad21[0x42 - 0x21];
    s16 m42;
    char pad44[0x68 - 0x44];
    void* m68;
    char pad6c[0x70 - 0x6c];
    void* m70;
    char pad74[0x7c - 0x74];
    u8 m7c;
    char pad7d[0xcd - 0x7d];
    u8 mcd;
};

struct PlayerMgr {
    char pad[0x44];
    void* m44;
};
extern PlayerMgr* data_0070B728;

struct EventState {
    char pad[0x18];
    u8 m18;
    char pad19[3];
    int m1c;
};
extern EventState* data_00709DF8;

struct FlagMgr;
bool func_00584B94(PlayerMgr* mgr, int flag);

struct SoundMgr;
extern SoundMgr* data_00711F50;
bool func_00587B50(SoundMgr* mgr, const sead::SafeString& name, int x);

struct Obj604 {
    char pad[0x28];
    struct Obj604_28* m28;   // agent3: m28->m8 = skeleton (0x4CE804(m8,id,0,0)); 0x4D012C(m28, c)
    char pad2c[0x15c - 0x2c];
    float m15c;
    char pad160[0x168 - 0x160];
    u8 m168;                 // agent3: 'Run' effect wanted if (m324&1)||(m324&8)||m168 (1DCF58)
    char pad169[0x324 - 0x169];
    u8 m324;                 // agent3: flag bits 1, 8
};

struct Vec3 {
    void set(float x_, float y_, float z_) { x = x_; y = y_; z = z_; }
    float getY() const { return y; }
    float dot(const Vec3& o) const { return x * o.x + y * o.y + z * o.z; }
    float squaredLength() const { return x * x + y * y + z * z; }
    float squaredLengthD() const { return dot(*this); }
    float length() const { return __sqrtf(squaredLength()); }
    float lengthD() const { return __sqrtf(dot(*this)); }
    float& refY() { return y; }
    void setY(float v) { y = v; }
    float& operator[](int i) { return (&x)[i]; }
    const float& operator[](int i) const { return (&x)[i]; }
    float x, y, z;
};
struct Vec3a {
    void setZero() { for (int i = 0; i < 3; i++) e[i] = 0.0f; }
    float e[3];
};
struct Word { u32 v; };
struct Handle { u32 v; bool isValid() const { return v != 0; } void reset() { v = 0; } };

struct Item12 { void update(); char pad[12]; };

void func_002927A0(Actor* a, void* b, bool c);
bool func_00540048(Actor* a);
void func_002D4460(Item12* it);
int func_0053F4BC(Actor* a);
int func_0053F998(Actor* a);
bool func_002D3CD4(void* a, void* b, int c, int d, bool e);
void func_0031E324(void* a, void* b, bool c);
void func_003426E4(Obj604* a);
int func_0053F910(Actor* a);
void func_00342C24(Obj604* a, int b, bool c);
void func_00361C34(void* a);
void func_002D12F8(void* a);
void func_002904F8(Actor* a);

__forceinline bool chase(float target,float* const& value,float step) {
    const float& current = value[0];
    if (current < target) {
        const float result = current + step;
        if (target <= result || result < current) {
            *value = target;
            return true;
        }
        *value = result;
        return false;
    }
    if (current > target) {
        const float result = current - step;
        if (result <= target || current < result) {
            *value = target;
            return true;
        }
        *value = result;
        return false;
    }
    return true;
}

static const float cChaseStep = 0.5f;

inline bool isAliveObj(HandleObjT* o) {
    if (o == 0)
        return false;
    return o->m4f1;
}

inline bool isSame(void* p, void* q) { return p != 0 && p == q; }

// agent3: effect handle {ptr, id} (Cls+0x6dc); 0x4A1B9C returns a 12-byte struct whose first 8 bytes are this
struct EffHandle {
    struct Eff* p;
    u32 id;
#ifdef EFFHANDLE_EXTRA
    EFFHANDLE_EXTRA          // agent3: per-file inline methods (isValid/kill/...), no layout change
#endif
};

// agent5: Cls+0x40C table (layout unknown, only methods used)
struct ItemTable40C {
    s32 get(s32 id);         // 0x537C14
    s32 set(s32 id, s32 v);  // 0x2551F0
};

// agent7: layout recovered from the CTOR 0x1DEA54 Cls::Cls(ActorParam* p) (MATCH, work4/agent7/func_001DEA54.cpp).
//  Bases: ActorBase(p) out-of-line 0x150E40 (size 0x40C; primary vt + 2nd base @0x320). Cls vt ro_6D1A88, 2nd @+0x5c (21 primary slots).
//  Ctor init-list (declaration order = store order):
//   0x40C Core/ItemTable40C ctor 0x255D48(this+0x40C, Cls* owner), size 0x18C (parts get &m40c as owner)
//   0x598 Life() 0x149D2C (cur=max=0x34, tick=0); 0x59C Vec3(0,0,0); 0x5A8 f32 = 1.0f
//   0x5AC Sub5AC (0x18 B): inline ctor { m14 = 0; reset(); } reset = 0x1E45E0 (u8 x4, f32 1,0,0,1, u32 0); 0x1DB8E0 re-does m5a8=1; m5ac.reset()
//   0x5C4..0x5F3 not initialised
//   0x5F4 new(0x3dc8) ctor 0x1FE6C8(); 0x5F8 new(0x3c) 0x2D40FC(this); 0x5FC new(0x38) 0x31E4DC(this); 0x600 new(0x144) 0x28C954(this)
//   0x604 new(0x53c) 0x3441F0(this); 0x608 new(0x5d4) 0x3623F8(this); 0x60C = 0 (later = 0x54D8B0(&m2d0->m18, this, 0))
//   0x610 new(0x20) 0x38F174(this); 0x614 new(0x17c) 0x2933AC(this); 0x618 new(0x34) 0x2D1348(this, m614); 0x61C new(0x3c) 0x2D4C30((*data_711010)->m10)
//   0x620,0x624,0x628,0x62C = 0 (Handle-like {Handle():v(0){}}); 0x630 Part*[25] zeroed in body then 25x new Part*(&m40c) (base ctor 0x2D43C8, 0x1C B, vt slot0 = checkDerived)
//   0x694 Item12[3] via __aeabi_vec_ctor_nocookie_nodtor(ctor 0x2D4678) - MATCH needs it wrapped: struct Slots{Item12 a[3];} (SafeArray-like, KB #123);
//         body: for(int i<3) slotAt(i)->init(this,(s8)i) = 0x2D4404 with slotAt(int i){Item12* a=m694.a; return &a[i];}
//   0x6B8 1-byte member with EMPTY out-of-line ctor (call linker-NOPed); 0x6B9..0x6C8 u8 = 0 except m6bc = 1
//   0x6CC f32 = FLT_MAX; 0x6D0 f32 = 1.0f; 0x6D4 EffHandle (p=0 only); 0x6DC EffHandle (p=0 only); 0x6E4 member ctor 0x1E6898 (0x28 B)
//   0x70C Vec3(0,0,0); 0x718 f32 = 0.07f; 0x71C = m3e8 (Word copy); 0x720 f32 = -9999.0f; 0x724 f32 = 0.0f
//  Body: m2e0 |= 2; ActorBase 0x4ECF6C(this) [registers this+0x2e4 with *data_70B728]; item init loop; 0x3614CC(0); 0x3613F0(*data_70FB60, this, m614);
//        m60c = ...; parts; 0x14A0E8(*data_711F50 SoundMgr, this) (dtor 0x1DF43C calls it with 0)
class Cls {
public:
    virtual void vf0();
    void calc();
    void updateHandle() {
        if (!m620.isValid())
            return;
        HandleObjT* obj = DynamicCast<HandleObjT>(func_0052FBA0(&data_00706E20->handles, m620.v));
        if (!isAliveObj(obj))
            m620.reset();
    }
    void func_001DCE44(int a, int b);
    void func_001DD1D8();
    void func_001DC9C8();
    void func_001DCF58();
#ifdef CLS_EXTRA
    // agent1: per-file hook. In your .cpp:  #define CLS_EXTRA void func_XXX(int a, bool b); inline helpers...
    // then #include this header. Lets each file declare/vary its own methods without editing this header.
    CLS_EXTRA
#endif

    char pad004[0x2cc - 4];
    void* m2cc;              // agent1: passed to held-actor vfunc slot 23 (0x5c) in 0x1DC3C4
    char pad2d0[0x344 - 0x2d0];
    struct Anim344* m344;    // agent3: 'start(name)' obj; 0x4A1B9C(sret 12B, m344, "Run") -> handle copied to m6dc (8B)
    char pad348[0x368 - 0x348];
    Vec3 m368;               // agent6: position, set together with m3d0 by setPos 0x1DE378
    char pad374[0x3d0 - 0x374];
    Vec3 m3d0;               // agent3: camera/look target? passed to 0x28C920(m600,0,&m3d0,0.15f,0.5f); agent6: followers (0x3879AC) track it
    Vec3 m3dc;
    Word m3e8;               // agent6: setPos(pos, u32 w) stores w here
    char pad3ec[0x40c - 0x3ec];
    struct ItemTable40C m40c; // agent5: s32 table obj: 0x537C14 get(id) (id 0x12..0x16 -> +0x94[id] if +0x28[id]!=0, else 0xe), 0x2551F0 set(id,v)
    char pad40d[0x438 - 0x40d];
    s32 m438;                // agent6: ==3 -> extra tutorial notify 0x27 in onShieldGuard 0x1DE958
    char pad43c[0x440 - 0x43c];
    s32 m440;                // agent3: mode; ==3 -> count actors (1DD3A0)
    char pad444[0x4cc - 0x444];
    void* m4cc;
    char pad4d0[0x598 - 0x4d0];
    u8 m598;                 // agent6: Life {u8 cur@598; u8 max@599; u8 tick@59A}: 0x149BD4 add(this+0x598, s32, bool), 0x149CA4 tick(this+0x598, bool)
    u8 m599;
    char pad59a[2];
    Vec3a m59c;
    float m5a8;
    char m5ac[4];
    float m5b0;
    char pad5b4[0x5f8 - 0x5b4];
    void* m5f8;
    void* m5fc;
    struct Model600* m600;   // agent1: model; 0x28C3E8(m,a,b), 0x28C02C(m,bool), 0x28C318(m,bool)=strb m+0xc9
    Obj604* m604;
    void* m608;
    struct Obj60C* m60c;     // agent1: passed to 0x151148(o,bool)
    char pad610[0x614 - 0x610];
    Actor* m614;
    void* m618;
    char pad61c[4];
    Handle m620;
    char pad624[0x62c - 0x624];
    u32 m62c;                // agent3: actor handle, 0x52FBA0(mgr, m62c) != 0 (1DD3A0)
    struct Part630* m630[25]; // agent1: 25 parts; 0x2D41B0(p,a,b), 0x2D4188(p,0) (loops i<0x19)
    Item12 m694[3];
    char pad6b8[3];
    s8 m6bb;
    u8 m6bc;                 // agent4: enables part-flag update in 1DD530 (if !m6bc return)
    u8 m6bd;                 // agent5: Player::setFlag6BD(bool) 0x1DDCCC (strb only); PlayerMgr forwarder 0x1DDCC4
    char pad6be[1];
    u8 m6bf;                 // agent5: read with ldrsb (=> s8, KB#81) in 1DDDF0 'had target'; set 1 there; kept u8 here not to disturb others
    u8 m6c0;
    u8 m6c1;                 // agent3: if set, damage (1DD48C) is ignored (invincible flag)
    s8 m6c2;
    s8 m6c3;
    char pad6c4[3];
    u8 m6c7;
    char pad6c8[0x6d4 - 0x6c8];
    EffHandle m6d4;          // agent5: "Splash"/"SplashSand" effect handle (setSplash 0x1DDB70)
    EffHandle m6dc;          // agent3: "Run" effect handle {ptr, id}; valid = p && p->m1c==id
    char pad6e4[0x70c - 0x6e4];
    Vec3 m70c;               // agent3: camera pos? y clamped >= mtx.ty+0.25 (1DD1D8); agent5: look target set by setTarget 0x1DDDF0 (user operator= copy)
    float m718;              // agent3: passed as s0 to 0x28C920; agent5: setTarget's f32 arg
    Word m71c;
    float m720;              // agent1: set to -9999.0f (0xC61C3C00) in 0x1DC4C8 before the event query; agent4: 1DDA48 copies msg+0x14 into it (ldr/str) after IsDerivedFrom(find(msg+0x28))
};

#endif


