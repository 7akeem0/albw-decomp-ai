// 0x1E5EDC (virtual): z first then x
typedef float f32;
struct Vec3 { f32 x, y, z; };
struct Obj1E5EDC {
    virtual bool isAtTargetXZ() const;
    char pad[0x478 - 4];
    Vec3 m478;
    char pad484[0x490 - 0x484];
    Vec3 m490;
};
bool Obj1E5EDC::isAtTargetXZ() const { return m478.z == m490.z && m478.x == m490.x; }
