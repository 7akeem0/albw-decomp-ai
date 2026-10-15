// 0x1E5B70: m3dc = (0, 0, z)
typedef float f32;
struct Vec3 {
    f32 x, y, z;
    Vec3() {}
    Vec3(f32 x_, f32 y_, f32 z_) : x(x_), y(y_), z(z_) {}
};
struct Obj1E5B70 {
    void setVelZ(f32 z);
    char pad[0x3dc];
    Vec3 m3dc;
};
void Obj1E5B70::setVelZ(f32 z) { m3dc = Vec3(0.0f, 0.0f, z); }
