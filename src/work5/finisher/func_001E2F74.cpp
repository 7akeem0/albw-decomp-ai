typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef unsigned int u32; typedef signed int s32;
struct Obj70FB60;
extern Obj70FB60* data_0070FB60;
bool func_00556E7C(Obj70FB60* o, int id);
struct X2F74 {
    virtual void vf();
    char pad004[0x71c - 4]; u16 m71c; u8 m71e; u8 m71f;
};
void X2F74::vf() {
    if (m71f == 0) {
        Obj70FB60* p = data_0070FB60;
        if (p) {    // nesting (not 'if (p == 0) return;') gives the per-case inline pops
            switch (m71e) {
            case 0:
                if (func_00556E7C(p, 0x38)) { m71f = 1; m71c = 0x23; }
                break;
            case 1:
                if (func_00556E7C(p, 0x9c)) { m71f = 1; m71c = 0x12; }
                else if (func_00556E7C(p, 0x34)) { m71f = 1; m71c = 0x23; }
                else if (func_00556E7C(p, 0xa4)) { m71f = 1; m71c = 8; }
                break;
            case 2:
                if (func_00556E7C(p, 0x3b)) { m71f = 1; m71c = 100; }
                break;
            }
        }
    } else if (m71f == 1) {
        if (m71c != 0)
            m71c--;
        else
            m71f = 2;
    }
}
