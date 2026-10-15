// state-dispatch family 46afc8
extern "C" void  f66df38(void*, int);
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
    char pad2[0x56];
    short mIdx;
    char pad3[0x20];
    void f();
};
void Cls::f() {
    short idx = mIdx;
    Mgr* m = m1c;
    if (idx >= 0) {
        if (m->at((unsigned int)idx)->m35 != 0) return;
    }
    f66df38((char*)this + 0x98, 10);
}
