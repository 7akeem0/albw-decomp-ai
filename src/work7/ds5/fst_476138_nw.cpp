// state-dispatch family 476138
extern "C" void  f66e65c(void*, int);
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
    char pad2[0x1a];
    short mIdx;
    char pad3[0x44];
    void f();
};
void Cls::f() {
    short idx = mIdx;
    Mgr* m = m1c;
    if (idx >= 0) {
        if (m->at((unsigned int)idx)->m35 != 0) return;
    }
    f66e65c((char*)this + 0x80, 0);
}
