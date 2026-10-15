// state-dispatch family 466bf8
extern "C" void  f66dcb0(void*, int);
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
    char pad2[0xb6];
    short mIdx;
    char pad3[0x8];
    void f();
};
void Cls::f() {
    short idx = mIdx;
    Mgr* m = m1c;
    if (idx >= 0) {
        if (m->at((unsigned int)idx)->m35 != 0) return;
    }
    f66dcb0((char*)this + 0xe0, 0);
}
