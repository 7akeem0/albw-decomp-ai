// 0x3E3AB4 -- state toggle guarded by a sead CriticalSection.
extern "C" void func_0010C0C0(void*);      // lock
extern "C" void func_0010C160(void*);      // unlock
extern "C" void func_0010A7BC(void*);      // list op at +0x64

struct Cls {
    char pad0[0x64];
    char mList;              // +0x64
    char pad1[0x76 - 0x64 - 1];
    unsigned char m76;
    void f();
};

void Cls::f() {
    func_0010C0C0(this);
    if (m76 == 2) {
        unsigned char* p = &m76;
        *p = 0;
        func_0010C160(this);
    } else {
        unsigned char* p = &m76;
        *p = 1;
        func_0010C160(this);
        func_0010A7BC(&mList);
    }
}
