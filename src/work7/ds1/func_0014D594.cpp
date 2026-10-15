typedef unsigned char u8;

extern "C" void func_0047F234(void*, void*);
extern "C" void* data_00709F30;

struct T {
    u8 pad[0xd];
    u8 m0d;
    u8 m0e;
};

struct S {
    u8 pad[0x30];
    T* m30;
    void f();
};

void S::f() {
    if (m30 == 0) return;
    if (m30->m0d != 0) return;
    if (m30->m0e != 0) return;
    func_0047F234(m30, (u8*)data_00709F30 + 0x56c);
    T* q = m30;
    q->m0e = 1;
}
