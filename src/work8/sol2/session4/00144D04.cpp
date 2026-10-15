typedef unsigned char u8;
typedef unsigned int u32;
typedef float f32;

extern "C" void func_00169A80(void*);
extern "C" void func_00168E9C(void*, u32, u32);
extern "C" u32 func_00588BF0(void*, u32);

struct Sub {
    u8 pad0[0xc];
    u32 m0c;
    u8 pad1[0x14 - 0x10];
    u8* m14;
};

struct T {
    u8 pad[0x44];
    u8 m44;
};

struct S {
    u8 pad0[0x78c];
    u32 m78c;
    u8 pad1[0x7b4 - 0x790];
    Sub* m7b4;
    u8 pad2[0x7bc - 0x7b8];
    T* m7bc;
    u8 pad3[0x7cb - 0x7c0];
    u8 m7cb;
    void f();
};

void rate(Sub*s,const f32&v){u32 count=*(volatile u32*)&s->m0c;__schedule_barrier();*(f32*)(s->m14+0x10)=v;}
void S::f() {
    if (m7cb != 0) {
        func_00169A80(m7b4);
        func_00168E9C(m7b4, m78c, 0);
        return;
    }
    if (func_00588BF0(this, 0) != 0) {
        m7cb=1;
        Sub*s=m7b4;
        rate(s,1.f);
        m7bc->m44 = 1;
    }
}
