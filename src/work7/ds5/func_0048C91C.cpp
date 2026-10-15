// 0x48C91C
extern "C" void func_0058FA08(void*);
struct Node { char pad[0x10]; void* m10; void* m14; };
struct Cls {
    void* m0;
    void* m4;
    Node* m8;
    void f();
};
void Cls::f() {
    if (m8 == 0) return;
    void** vt4 = *(void***)m4;
    ((void(*)(void*))vt4[5])(m4);
    Node* p = m8;
    if (p->m14 != 0) {
        func_0058FA08(p->m14);
        p->m14 = 0;
        p->m10 = 0;
    }
    if (m8 != 0) {
        void** vt8 = *(void***)m8;
        ((void(*)(void*))vt8[1])(m8);
    }
    m8 = 0;
}
