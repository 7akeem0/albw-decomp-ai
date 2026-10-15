typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef float f32;

struct NoThrowTag {};
void* operator new(unsigned int size, NoThrowTag) throw();

struct Vec3 {
    f32 x, y, z;
    void setScaleAdd(f32 s, const Vec3& a, const Vec3& b);   // 0x115DAC
    void setMul(const Vec3& a, f32 s);                        // 0x115D70
    void setAdd(const Vec3& a, const Vec3& b);                // 0x115C54
    Vec3& operator+=(const Vec3& o) { setAdd(*this, o); return *this; }
    void set(const Vec3& o) { x = o.x; y = o.y; z = o.z; }
};
inline Vec3 operator*(const Vec3& a, f32 s) { Vec3 r; r.setMul(a, s); return r; }

struct Id16 {
    u16 v;
    Id16(u16 x) : v(x) {}
};

struct Obj480 {
    char pad0[4];
    Vec3 pos;
    char pad10[0x28 - 0x10];
    Id16 m28;
    void setId(Id16 id) { m28 = id; }
};

struct Model {
    Model();                         // 0x4EDC9C
    char pad0[0x18];
    Obj480* m18;
    char pad1c[0x2c - 0x1c];
    u16 m2c;
    char pad2e[0x48 - 0x2e];
    void setId(const Id16& id) { m18->m28 = id; }
};
void func_004EDAD0(Model* m, const u32* h);
void func_004ED9C8(Model* m);
struct ColMgr;
extern ColMgr* data_00709D28;
void func_004A879C(ColMgr* c, Model* m, int v);

class X {
public:
    void func_001E3EB0(f32 a, f32 b, f32 c);
    void func_0014EB3C();
    f32 func_0054DE3C(int a, int b);
    char pad0[0x54];
    u16 m54;
    char pad56[0x2cc - 0x56];
    u32 m2cc;
    char pad2d0[0x374 - 0x2d0];
    Vec3 m374;
    Vec3 m380;
    char pad38c[0x3d0 - 0x38c];
    Vec3 m3d0;
    char pad3dc[0x480 - 0x3dc];
    Obj480* m480;
    Model* m484;
};

void X::func_001E3EB0(f32 a, f32 b, f32 c) {
    m484 = new ((NoThrowTag())) Model();
    Obj480* o = m480;
    m484->m18 = o;
    func_0014EB3C();
    Vec3 pos;
    { Vec3* o2 = &pos; const Vec3* h = &m374; const Vec3* q = &m3d0; o2->setScaleAdd(-a, *h, *q); }
    pos.y += func_0054DE3C(0, 1) + c;
    Vec3& p = pos;
    p += m380 * b;
    o->pos.set(pos);
    u32 h = m2cc;
    func_004EDAD0(m484, &h);
    u32 k = 4;
    m484->setId(*(const Id16*)&k);
    func_004ED9C8(m484);
    m484->m2c = m54;
    func_004A879C(data_00709D28, m484, 0);
}
