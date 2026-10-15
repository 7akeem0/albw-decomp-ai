typedef unsigned char u8;
typedef signed char s8;
typedef unsigned int u32;
typedef signed int s32;
typedef float f32;

struct Vec3 { f32 x, y, z; void set(const Vec3& o) { *this = o; } };
struct Vec2 { f32 x, y; };
struct Word { u32 v; };

struct HandleMgr {};
struct ActorX;
ActorX* func_0052FBA0(HandleMgr* mgr, u32 handle);
struct Game {
    char pad[0x3dbbc];
    HandleMgr handles;
};
extern Game* data_00706E20;

struct ActorX {
    char pad[0x3d0];
    Vec3 m3D0;
    char pad3dc[0x3e8 - 0x3dc];
    Word m3E8;
};

struct Link480 {
    void func_0037C358(const Vec3& pos, Word w, u32 x, Vec2 v);
};

class Actor4A5C {
public:
    bool func_001E4A5C(s32 unused, const Vec3* pos);
    char pad[0x3dc];
    Vec3 m3DC;
    char pad3e8[0x480 - 0x3e8];
    Link480 m480;
    char pad481[0x4dc - 0x481];
    u32 m4DC;
    char pad4e0[4];
    u32 m4E4;
    Vec2 m4E8;
    char pad4f0;
    s8 m4F1;
};

bool Actor4A5C::func_001E4A5C(s32 unused, const Vec3* pos) {
    if (!m4F1)
        return false;
    m3DC.set(*pos);
    if (m4DC) {
        ActorX* a = func_0052FBA0(&data_00706E20->handles, m4DC);
        if (a)
            m480.func_0037C358(a->m3D0, a->m3E8, m4E4, m4E8);
        m4DC = 0;
    }
    m4F1 = 0;
    return true;
}
