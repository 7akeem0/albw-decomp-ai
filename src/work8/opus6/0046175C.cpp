typedef unsigned char u8;
typedef unsigned short u16;
typedef short s16;
typedef int s32;
typedef unsigned int u32;
typedef float f32;

struct Vec2 { f32 x, y; };
struct Vec3 { f32 x, y, z; };
struct Ctl38 {
    s16 m0;
    s16 m2;
    u32 m4;
    u32 m8;
    void func_002317C0(f32 v);
    void start(u32 v) { m8 = v; m2 = 0; m0 = 0; func_002317C0(1.0f); }
    void reset(u32 v) { m8 = v; m2 = 0; m0 = 0; }
};
bool func_00532C78(Ctl38* c);
struct Sub50 { };
__attribute__((weak)) void func_0066DB6C(void* p, s32 a);
struct Model {
    char pad[0x44];
    char m44[4];
    void func_0047D480(const Vec3* a, const Vec3* b, Vec2 c);
    void func_0047D480b(const Vec3& a, const Vec3& b, Vec2 c);
};
void func_001B6C2C(Model* m);
void func_0047D480(Model* m, const Vec3* a, const Vec3* b, Vec2 c);
void func_002313DC(void* p);
struct Mgr7142C8;
extern Mgr7142C8* data_007142C8;
void func_0051AEA4(Mgr7142C8* m, const Vec3* a, const Vec3* b, s32 c);
void func_004B989C(void* p);
struct Info14 { char pad[8]; u32 m8; char pad0c[0x16 - 0xc]; u16 m16; };

struct Obj {
    char pad[0xf];
    u8 mf;
    void* m10;
    Info14* m14;
    char pad18[0x1c - 0x18];
    u32 m1c;
    char pad20[0x38 - 0x20];
    Ctl38 m38;
    char pad44[0x50 - 0x44];
    char m50[0x7c - 0x50];
    Vec2 m7c;
    char pad84[0xa0 - 0x84];
    Vec3 ma0;
    char padac[0xec - 0xac];
    Vec3 mec;
    char padf8[0x138 - 0xf8];
    Model* m138;
    void f();
};

void Obj::f() {
    if ((m14->m16 & 8) && m14->m8 == 0) {
        func_0066DB6C(m50, 0);
        func_001B6C2C(m138);
        Vec2 v = m7c;
        func_0047D480(m138, &ma0, &mec, v);
        func_002313DC(m138->m44);
        func_0051AEA4(data_007142C8, &ma0, &mec, 2);
        mf = 100;
        func_004B989C(m10);
        m38.start(m1c);
        return;
    }
    if (!func_00532C78(&m38)) func_0066DB6C(m50, 0);
}
