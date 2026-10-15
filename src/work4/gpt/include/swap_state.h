// Pass 4 matching-source view; helper names are descriptive hypotheses.
#ifndef GPT_PASS4_SWAP_STATE_H
#define GPT_PASS4_SWAP_STATE_H
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef float f32;

struct Vec3 {
    f32 x, y, z;
    void set(const Vec3& o) { x = o.x; y = o.y; z = o.z; }
    void set(f32 x_, f32 y_, f32 z_) { x = x_; y = y_; z = z_; }
    Vec3() {}
    Vec3(f32 x_, f32 y_, f32 z_) : x(x_), y(y_), z(z_) {}
};

struct Src3B40 {
    Vec3 m0;
    char pad0c[0x24 - 0xc];
    Vec3 m24;
    char pad30[0x64 - 0x30];
    f32 m64;
};

struct Obj5F4 {
    char pad[0x3b40];
    Src3B40 m3b40;
};

struct StateArg67 {
    void setArg(const Vec3& p, const Vec3& d, f32 f) { pos.set(p); dir.set(d); f18 = f; }
    Vec3 pos;
    Vec3 dir;
    f32 f18;
};

struct Actor;
void* func_0028F7B0(Actor* a, int state);
s16 func_0053F98C(Actor* a);
void func_unk_inlined(Actor* a);

struct Obj618 {
    char pad[0x30];
    int m30;
};

class Cls;
bool func_0052E620(Cls* c, int b);

class Cls {
public:
    bool func_001DCE44(int a, int b);
    void done();
    bool ok() { return m5a8 != 1.0f && !m5ad && func_0053F98C(m614) != 0x5f; }
    char pad[0x5a8];
    f32 m5a8;
    u8 m5ac;
    u8 m5ad;
    char pad5ae[0x5f4 - 0x5ae];
    Obj5F4* m5f4;
    char pad5f8[0x614 - 0x5f8];
    Actor* m614;
    Obj618* m618;
};
#endif
