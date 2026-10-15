// 0x417D28
extern "C" char ro_006F074C[];
extern "C" void func_00417200(void*);
extern "C" void func_0041D24C(void*);
extern "C" void func_0041CA0C(void*);
struct Node {
    char pad[0x131];
    unsigned char m131;
    char pad2[0x1a4 - 0x132];
    Node* m1a4;
};
struct Cls {
    void* vptr;
    char pad[0x5 - 4];
    unsigned char m5;
    char pad2[0x130 - 6];
    Node* m130;
    Cls* f();
};
Cls* Cls::f() {
    vptr = ro_006F074C;
    func_00417200(this);
    for (Node* p = m130; p != 0; p = p->m1a4) {
        if (p->m131 != 0) func_0041D24C(p);
    }
    for (Node* p = m130; p != 0; p = p->m1a4) {
        func_0041CA0C(p);
    }
    m130 = 0;
    m5 = 0;
    return this;
}
