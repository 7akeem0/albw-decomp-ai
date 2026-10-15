typedef unsigned char u8;
typedef unsigned int u32;

struct Tag { u32 p; };
void* operator new(u32, Tag) throw();

extern "C" void func_004B9958(void*, u32);

struct C124 { u8 d[0x124]; C124(); };
struct C0F4 { u8 d[0xf4]; C0F4(); };
struct C0B0 { u8 d[0xb0]; C0B0(); };
struct C0D0 { u8 d[0xd0]; C0D0(); };
struct C08C { u8 d[0x8c]; C08C(); };

struct S {
    u8 m0[0x10];
    u8 m10;
    u8 m11;
    u8 m12;
    u8 m13;
    void* m14;
    void* m18;
    u8 m1c[0x28 - 0x1c];
    void* m28;
    void* m2c;
    void* m30;
    void init();
};

void S::init() {
    u8 a = m10;
    m13 = 0;
    if (a == 1 || m12 == 1) {
        Tag t1;
        m30 = new (t1) C124();
    }
    if (m10 != 0) {
        Tag t2 = {};
        void* p = new (t2) C0F4();
        m14 = p;
        func_004B9958(p, 2);
        Tag t3 = {};
        void* q = new (t3) C0B0();
        m18 = q;
        func_004B9958(q, 4);
        m10 = 0;
    }
    if (m11 != 0) {
        Tag t4;
        m28 = new (t4) C0D0();
        m11 = 0;
    }
    if (m12 != 0) {
        Tag t5;
        m2c = new (t5) C08C();
        m12 = 0;
    }
}
