// 0x41B530
extern "C" int func_0010A884(void*);

struct Cls {
    char pad[0xc];
    void* m0c;
    bool f();
};

bool Cls::f() {
    bool r;
    if (func_0010A884(&m0c)) r = false;
    else r = true;
    return r;
}
