typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;

struct B {
    u8 pad[0x1c];
    u32 m1c;
};

struct A {
    u8 pad[0x8];
    u32 m8;
};

struct S {
    u8 pad0[4];
    B* m4;
    A* m8;
    s32 m0c;
    u8 m10;
    void f();
};

void S::f() {
    m0c = -1;
    m10 = 0;
    if (m4 != 0) {
        m0c = m4->m1c;
        m10 = (m8 == 0) ? 1 : 3;
    } else if (m8 != 0) {
        m0c = m8->m8;
        m10 = 2;
    }
}
