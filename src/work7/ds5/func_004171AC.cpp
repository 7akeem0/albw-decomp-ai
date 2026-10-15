// 0x4171AC
extern "C" void func_00417200(void*);
extern "C" void func_0040E318(void*, int);
extern "C" void func_0041D24C(void*);
struct Node {
    char pad1[0x131];
    unsigned char m131;
    char pad2[0x1a4 - 0x132];
    Node* m1A4;
};
struct Cls {
    char pad[0x130];
    Node* m130;
    void f(int v);
};
void Cls::f(int v) {
    func_00417200(this);
    for (Node* n = m130; n != 0; n = n->m1A4) {
        if (n->m131 == 0) continue;
        if (v >= 0) func_0040E318((char*)n + 0x90, v & 0xff);
        func_0041D24C(n);
    }
}
