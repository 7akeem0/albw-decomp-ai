#ifndef GPT_PLAYER_CALC_TYPES_H
#define GPT_PLAYER_CALC_TYPES_H

// Recovered partial layout for this translation unit. See ../REPORT.md.
#include "gpt_types.h"

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

struct Actor {
    bool isKind(int x) const { return m20 == x; }
    char pad0[0x20];
    u8 m20;
    char pad21[0x42 - 0x21];
    s16 m42;
    char pad44[0x68 - 0x44];
    const void* m68;
    char pad6c[0x70 - 0x6c];
    const void* m70;
    char pad74[0x7c - 0x74];
    u8 m7c;
    char pad7d[0xcd - 0x7d];
    u8 mcd;
};

struct PlayerMgr {
    char pad[0x44];
    const void* m44;
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
    char pad[0x15c];
    float m15c;
};

struct Vec3 {
    void set(float x_, float y_, float z_) { x = x_; y = y_; z = z_; }
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

// Value/reference boundaries below are needed for the matching ARMCC allocation.
// These helper names are hypotheses, not recovered original class names.
struct Float {
    float v;
    Float(float x) : v(x) {}
    operator float() const { return v; }
};
__forceinline bool chase(float* const& value,float target,const Float& step) {
    const float& current = value[0];
    if (current < target) {
        Float result = current + step;
        if (target <= result || result < current) {
            *value = target;
            return true;
        }
        *value = result;
        return false;
    }
    if (current > target) {
        Float result = current - step;
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

inline bool isSame(const void* const& p, const void* const& q) { return p != 0 && p == q; }

struct Loop {
    Item12* items;
    int i;
    Loop(Item12* p, int x) : items(p), i(x) {}
    Item12& get() { return items[i]; }
};
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

    char pad004[0x3dc - 4];
    Vec3 m3dc;
    Word m3e8;
    char pad3ec[0x4cc - 0x3ec];
    void* m4cc;
    char pad4d0[0x598 - 0x4d0];
    u8 m598;
    u8 m599;
    char pad59a[2];
    Vec3a m59c;
    float m5a8;
    char m5ac[4];
    float m5b0;
    char pad5b4[0x5f8 - 0x5b4];
    void* m5f8;
    void* m5fc;
    char pad600[4];
    Obj604* m604;
    void* m608;
    char pad60c[0x614 - 0x60c];
    Actor* m614;
    void* m618;
    char pad61c[4];
    Handle m620;
    char pad624[0x694 - 0x624];
    Item12 m694[3];
    char pad6b8[3];
    s8 m6bb;
    char pad6bc[3];
    u8 m6bf;
    char pad6c0[2];
    s8 m6c2;
    s8 m6c3;
    char pad6c4[3];
    u8 m6c7;
    char pad6c8[0x71c - 0x6c8];
    Word m71c;
};

#endif
