// 0x1E5B38 / 0x1E5EDC: compare XZ of m478 with m490 (x first here; 0x1E5EDC tests z first)
typedef float f32;
struct Vec3 { f32 x, y, z; };
struct Obj1E5B38 {
    bool isAtTargetXZ() const;
    char pad[0x478];
    Vec3 m478;
    char pad484[0x490 - 0x484];
    Vec3 m490;
};
bool Obj1E5B38::isAtTargetXZ() const { return m478.x == m490.x && m478.z == m490.z; }
