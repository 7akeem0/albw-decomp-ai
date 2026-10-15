// 0x1E5EAC: save previous m478.z into m48c, set m478.z = v, copy m478 into m40c->m4 via Vec3::set (member-wise)
typedef float f32;
struct Vec3 { f32 x, y, z; void set(const Vec3& o) { x = o.x; y = o.y; z = o.z; } };
struct Obj40C { char pad[4]; Vec3 m4; };
struct Obj1E5EAC {
    void setF480(f32 v);
    char pad[0x40c];
    Obj40C* m40c;
    char pad410[0x478 - 0x410];
    Vec3 m478;
    char pad484[0x48c - 0x484];
    f32 m48c;
};
void Obj1E5EAC::setF480(f32 v) { m48c = m478.z; m478.z = v; m40c->m4.set(m478); }
