#include "a6.h"
#include "sead_rtti.h"

struct SubModel {
    SEAD_RTTI_BASE(SubModel)
};
struct SubModelX : public SubModel {
    SEAD_RTTI_OVERRIDE(SubModelX, SubModel)
    void func_0038AF5C();
};

template <typename D, typename T>
inline bool IsDerivedFrom(const T* o) {
    const sead::RuntimeTypeInfo::Interface* ti = D::getRuntimeTypeInfoStatic();
    return o != 0 && o->checkDerivedRuntimeTypeInfo(ti);
}
template <typename D, typename T>
inline D* DynamicCast(T* o) {
    if (IsDerivedFrom<D, T>(o))
        return static_cast<D*>(o);
    return 0;
}

template <typename T> inline T Min(T a, T b) { return a > b ? b : a; }
struct EventState {
    char pad[0x18];
    s8 m18;
};
extern EventState* data_00709DF8;

struct Tutorial {
    void func_004C6654(s32 id);
    void func_004C69DC(u16 v);
};
extern Tutorial* data_00709F30;

struct Actor {
    void func_002902CC(bool b);
    char pad[0xc6];
    u8 mc6;
};

struct Cls {
    bool damage(s32 delta, bool b, bool c);
    char pad[0x598];
    Life mLife;
    char pad59b[0x614 - 0x59b];
    Actor* m614;
    char pad618[0x630 - 0x618];
    SubModel* m630[25];
    char pad694[0x6c1 - 0x694];
    u8 m6c1;
};

// 0x1DE134 (entered only by fall-through from 0x1DE128). Matching needs the NAMED copy of c declared
// at the very top (puts &mLife in sb and c in r7) and Min(a,b){return a > b ? b : a;} (cmp d,cur; movgt).
bool Cls::damage(s32 delta, bool b, bool c) {
    bool heal = c;
    if (mLife.isDead() || m6c1)
        return false;
    if (delta < 0) {
        s8 st = data_00709DF8->m18;
        if (st == 7 || st == 0x25) {
            s32 d = Min(-delta, (s32)mLife.mCur);
            if (d > 0) {
                if (data_00709F30)
                    data_00709F30->func_004C69DC(d);
            }
        }
    }
    mLife.add(delta, heal);
    m614->func_002902CC(b);
    SubModel* part = m630[m614->mc6 ? 0x15 : 0x16];
    DynamicCast<SubModelX>(part)->func_0038AF5C();
    if (data_00709F30) {
        data_00709F30->func_004C6654(0x23);
        if (!b)
            data_00709F30->func_004C6654(0x24);
    }
    return true;
}
