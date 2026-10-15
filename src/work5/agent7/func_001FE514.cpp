typedef unsigned int u32;
typedef unsigned char u8;
typedef float f32;
struct Vec3 {
    f32 x, y, z;
    Vec3& operator=(const Vec3& o) { x = o.x; y = o.y; z = o.z; return *this; }
};
struct Elem9C {
    Vec3 m0;
    Vec3 mC, m18, m24, m30, m3C, m48, m54, m60;
    f32 m6c, m70, m74, m78, m7c;
    u32 m80, m84, m88, m8c;
    bool m90, m91, m92;
    u8 m93, m94, m95, m96, m97, m98;
    Elem9C();
};
void copyElem(Elem9C* d, const Elem9C& s) { *d = s; }
