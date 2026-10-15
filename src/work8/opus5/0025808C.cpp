typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;

struct CS { u8 pad[4]; };
struct ScopedLock {
    ScopedLock(CS* cs);
    ~ScopedLock();
    CS* mCS;
};
struct Mgr { u8 pad[0x44]; s32 m44; };
extern Mgr* data_0070B728;
struct Item { u32 m0; };
struct Game { u8 pad[0x3dbc0]; u32 m3DBC0; u8 pad3dbc4[4]; Item* m3DBC8; };
extern Game* data_00706E20;
extern const u32 ro_00693700;
Item* func_005841A8(Game* g, u32 a, u32 b);
bool func_00584B1C(Mgr* m, u32 v);

struct Self {
    u8 pad0[0xc];
    CS mC;
    u8 pad10[0x60 - 0x10];
    u16 m60;
    u8 pad62[0x6c - 0x62];
    u8 m6C;
    void set(s32 idx, s32 mode, f32 v);
    void update();
};

void Self::update()
{
    Mgr* m = data_0070B728;
    if (m == 0) return;
    f32 zero = 0.0f;
    f32 one = 1.0f;
    if (m->m44 == 0) {
        if (m60 & 2) {
            ScopedLock lock(&mC);
            set(1, 0xf, one);
            set(2, 0xf, zero);
            m60 = 1;
            m6C = 0;
        }
    } else if (m60 & 1) {
        Game* g = data_00706E20;
        u32 key = ro_00693700;
        Item* it = func_005841A8(g, key, g->m3DBC0);
        if (data_00706E20->m3DBC8 != it && func_00584B1C(m, it->m0)) {
            set(1, 0xf, zero);
            set(2, 0xf, one);
            m6C = 1;
        }
        m60 = 2;
    }
}

