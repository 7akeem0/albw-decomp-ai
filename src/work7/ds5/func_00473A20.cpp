// 0x473A20
extern "C" void func_004B9620(void*);

struct Sub {
    char pad[0xe];
    unsigned char mE;
};

struct Cls {
    char pad[0xa0];
    Sub* pa0;
    void f();
};

void Cls::f() {
    func_004B9620(this);
    Sub* s = pa0;
    s->mE = 1;
}
