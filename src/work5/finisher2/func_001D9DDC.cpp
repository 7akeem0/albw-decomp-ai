// MATCH (finisher2): the flag store is the comparison RESULT (m2d7 = m40c.isEnd()), not constant 1 -> movhs r0,#1 reuses r0, no hoisted mov r2,#1.
// vtable ro_6D1904 (different class from Obj1D8): step a counter, release a handle, rebuild an S/T matrix.
typedef unsigned int u32;
typedef signed int s32;
typedef unsigned char u8;
typedef float f32;
struct Vec3 { f32 x, y, z; };
struct Mtx34 { f32 m[3][4]; };
struct Ctr { u32 cur, max; bool isEnd() const { return cur >= max; } bool isEndC() const { Ctr c = *this; return c.cur >= c.max; }
 bool step2(u8& d) { Ctr c = *this; if (c.cur < c.max) { cur = c.cur + 1; return true; } d = c.cur >= c.max; return false; }
 bool step() { Ctr c = *this; if (c.cur < c.max) { cur = c.cur + 1; return true; } return false; } };
struct Sub324 { void release(s32 h); };   // 0x3521F0
inline void makeST(Mtx34& o, const Vec3& s, const Vec3& t) {
    f32 z = 0.0f;
    o.m[0][0] = s.x; o.m[1][0] = z; o.m[2][0] = z;
    o.m[0][1] = z; o.m[1][1] = s.y; o.m[2][1] = z;
    o.m[0][2] = z; o.m[1][2] = z; o.m[2][2] = s.z;
    o.m[0][3] = t.x; o.m[1][3] = t.y; o.m[2][3] = t.z;
}
struct ObjDDC {
    char pad0[0x2d7];
    u8 m2d7;
    char pad2d8[0x324 - 0x2d8];
    Sub324 m324;
    char pad325[0x40c - 0x325];
    Ctr m40c;
    char pad414[0x428 - 0x414];
    Vec3 m428;
    Vec3 m434;
    char pad440[0x444 - 0x440];
    void* m444;
    char pad448[0x4ac - 0x448];
    Mtx34 m4ac;
    char pad4dc[0x4e4 - 0x4dc];
    s32 m4e4;
    void func_00000000(void* p, s32 n);   // linker-inlined (empty) call
    void f();
};
void ObjDDC::f() {
    if (!m40c.step()) { m2d7 = m40c.isEnd(); return; }
    if (m4e4 != -1) { m324.release(m4e4); m4e4 = -1; }
    func_00000000(m444, 1);
    makeST(m4ac, m428, m434);
}
