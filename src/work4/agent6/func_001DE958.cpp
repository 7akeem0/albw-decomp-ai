#include "a6.h"
namespace sead {
class SafeString {
public:
    SafeString(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
}
struct Vec3 { f32 x, y, z; };
struct Vec2 {
    Vec2(f32 x_, f32 y_) : x(x_), y(y_) {} void set(f32 x_, f32 y_) { y = y_; x = x_; }
    f32 x, y;
};

struct Mtx34 {
    f32 m[3][4];
};

struct Model600 {
    Mtx34* getJointMtx();  // 0x53ED74
};

struct AnimResult { u32 a, b, c; };
struct AnimCtrl {
    AnimResult start(const char* name);  // 0x4A1B9C (sret)
};

struct Actor614 {
    char pad[0x9c];
    Vec2 m9c;
    void setGuard(f32 v) { m9c = Vec2(v, 0.0f); }
};

struct EffMgr {
    void func_0026F4EC(s32 kind, const Vec3* pos);
};
struct GameMgr {
    char pad[0xf9c];
    EffMgr* mf9c;
};
extern GameMgr* data_0070BB18;

struct Tutorial {
    void func_004C6654(s32 id);
};
extern Tutorial* data_00709F30;

struct SoundMgr {
    void playSE(const sead::SafeString& name, const Vec3* pos);  // 0x4EA9E4
};
extern SoundMgr* data_00711F50;

struct Cls {
    void onShieldGuard();
    void startAnim(const char* name) {
        if (m344)
            m344->start(name);
    }
    char pad[0x344];
    AnimCtrl* m344;
    char pad348[0x438 - 0x348];
    s32 m438;
    char pad43c[0x600 - 0x43c];
    Model600* m600;
    char pad604[0x614 - 0x604];
    Actor614* m614;
};

void Cls::onShieldGuard() {
    m614->m9c.set(1.5f, 0.0f);
    Mtx34* mtx = m600->getJointMtx();
    Vec3 pos;
    pos.x = mtx->m[0][3];
    pos.y = mtx->m[1][3];
    pos.z = mtx->m[2][3];
    data_0070BB18->mf9c->func_0026F4EC(4, &pos);
    startAnim("Shield");
    if (data_00709F30) {
        data_00709F30->func_004C6654(0x26);
        if (m438 == 3)
            data_00709F30->func_004C6654(0x27);
    }
    data_00711F50->playSE("SE_PL_Shield_GARD", &pos);
}
