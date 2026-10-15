typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef float f32;
void func_00588C14(void* owner, u16 idx, u32 kind);
struct SubB { char pad0[8]; f32 m8; char padc[4]; f32 m10; f32 m14; char pad18[4]; u8 m1c; };
struct SubA { char pad0[0x14]; SubB* m14; };
struct C {
    char pad0[0x36];
    u16 m36;
    char pad1[0x444 - 0x38];
    SubA* m444;
    char pad2[0x7c4 - 0x448];
    u8 m7f4;
    void f();
};
void C::f() {
    SubB* b = m444->m14;
    if (b->m1c != 0)
        return;
    float z = 0.0f; if (b->m10 >= z) {
        if (b->m8 != b->m14)
            return;
    } else {
        if (b->m8 <= z) {
        } else {
            return;
        }
    }
    m7f4 = 1;
    if (m36 != 0)
        func_00588C14(this, 0, 1);
}


