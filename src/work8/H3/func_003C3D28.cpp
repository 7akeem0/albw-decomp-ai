// func_003C3D28: P = self->m48->m8dc->m14; if (P->m1c) return;
// if (P->m10 >= 0.0f) { if (P->m8 != P->m14) return; } else { if (P->m8 > 0.0f) return; }
// tail call func_003842C0((char*)self->m48 + 0x8c0, 0x2c, 0xa, 1)

typedef unsigned char u8;
typedef unsigned int u32;
typedef float f32;

struct P {
    char p0[8];
    f32 m8;
    char pc[4];
    f32 m10;
    f32 m14;
    char p18[4];
    u8 m1c;
};

struct B {
    char p0[0x14];
    P* m14;
};

struct A {
    char p0[0x8c0];
    char p8c0[0x8dc - 0x8c0];
    B* m8dc;
};

struct Self {
    char p0[0x48];
    A* m48;
};

void func_003842C0(void* p, u32 a, u32 b, u32 c);

void func_003C3D28(Self* self) {
    A* a = self->m48;
    P* p = a->m8dc->m14;
    if (p->m1c != 0) return;
    if (p->m10 >= 0.0f) {
        if (p->m8 == p->m14) func_003842C0((char*)a + 0x8c0, 0x2c, 0xa, 1);
    } else {
        if (p->m8 <= 0.0f) func_003842C0((char*)a + 0x8c0, 0x2c, 0xa, 1);
    }
}
