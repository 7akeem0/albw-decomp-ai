typedef unsigned char u8;
typedef signed char s8;
typedef unsigned int u32;
typedef signed int s32;

struct Info { u8 m0; s8 m1; };
struct Msg { char pad[0x2c]; Info* m2C; };

class C3D68 {
public:
    int func_001D3D68(Msg* m);
    char pad[0x2d7];
    u8 m2D7;
};

int C3D68::func_001D3D68(Msg* m) {
    Info* i = m->m2C;
    if (i) {
        s8 k = i->m1;
        if (k == 3 || k == 1 || k == 2 || k == 13)
            m2D7 = 1;
    }
    return 0;
}
