// 0x4176AC
extern "C" void func_00417200(void*);
extern "C" void func_0041D24C(void*);
extern "C" void func_0041CA0C(void*);
struct Node {
    char pad1[0x131];
    unsigned char m131;
    char pad2[0x1a4 - 0x132];
    Node* m1A4;
};
struct Cls {
    char pad1[5];
    unsigned char m5;
    char pad2[0x130 - 6];
    Node* m130;
    void f();
};
void Cls::f() {
    func_00417200(this);
    for (Node* n = m130; n != 0; n = n->m1A4) {
        if (n->m131 != 0) func_0041D24C(n);
    }
    for (Node* n = m130; n != 0; n = n->m1A4) {
        func_0041CA0C(n);
    }
    m130 = 0;
    m5 = 0;
}
