typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed short s16;

extern "C" void* data_00708998;
extern "C" void* data_0070C8E0;
extern "C" float func_0051D588(void*, void*);
extern "C" int func_00581C9C(void*, s16);

struct V3 { float x, y, z; };

struct S {
    u8 pad[0x54];
    s16 m54;
    u8 pad2[0x3ac - 0x56];
    float m3ac;
    u8 pad3[0x3d0 - 0x3b0];
    V3 m3d0;
    bool f();
};

bool S::f() {
    if (m3ac < 0.0f) return true;
    void* g = data_00708998;
    void* q = *(void**)((u8*)g + 0x18);
    float v = func_0051D588(q, &m3d0);
    if (v > m3ac) return false;
    void* h = data_0070C8E0;
    if (func_00581C9C(h, m54) == 0) return false;
    return true;
}
