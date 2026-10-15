typedef unsigned int u32;

struct Obj1E0018 {
    char pad[0x34];
    u32 m34;
    char pad38[0x40 - 0x38];
    u32 m40;
    void func_001E0018(u32 v);
};

void Obj1E0018::func_001E0018(u32 v) {
    if (v > 0x4000001) if (v < 0x400000b) {
        m40 = v;
        m34 |= 2;
    }
}
