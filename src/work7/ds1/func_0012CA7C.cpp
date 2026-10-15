typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed short s16;

extern "C" void func_00231448(void*);
extern "C" void func_00656CA4(void*, u32);

struct Elem {
    u8 pad[0x35];
    u8 m35;
    u8 pad2[0x38 - 0x36];
};

struct Arr {
    u8 pad[8];
    s32 count;
    Elem* data;
};

struct S {
    u8 pad0[0xe];
    u8 m0e;
    u8 pad1[0x1c - 0xf];
    Arr* m1c;
    u8 pad2[0x5e - 0x20];
    s16 m5e;
    u8 pad3[0x68 - 0x60];
    u8 m68[0x10];
    void f();
};

void S::f() {
    s16 idx = m5e;
    Arr* a = m1c;
    if (idx >= 0) {
        Elem* e = ((u32)idx < (u32)a->count) ? &a->data[idx] : a->data;
        if (e->m35 != 0) return;
    }
    func_00231448((u8*)this + 0x5c);
    func_00656CA4((u8*)this + 0x68, 0);
    m0e = 0;
}
