// 0x425954 (K=5) and K-variants
extern "C" void  func_0066C19C(void*, int);
struct Elem { char pad[0x35]; unsigned char m35; char pad2[0x38 - 0x36]; };
struct Mgr {
    char pad[8];
    unsigned int num;
    Elem* arr;
    Elem* at(unsigned int i) { return i < num ? arr + i : arr; }
};
struct Cls {
    char pad[0x1c];
    Mgr* m1c;
    char pad2[0x38 - 0x20];
    char x38[4];
    char pad3[0x5e - 0x3c];
    short m5e;
    void f();
};
void Cls::f() {
    short idx = m5e;
    Mgr* m = m1c;
    if (idx >= 0) {
        if (m->at((unsigned int)idx)->m35 != 0) return;
    }
    func_0066C19C((char*)this + 0x38, 1);
}
