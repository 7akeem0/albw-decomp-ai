// 0x43CF5C
extern "C" void func_0043C520(void*, float);
extern "C" void func_0043C6E4(void*);
extern "C" void func_0066C424(void*, int) ;
struct Cls {
    char pad[0x174];
    short m174;
    void f();
};
void Cls::f() {
    m174 = m174 + 1;
    if (m174 >= 0x3c) {
        func_0043C520(this, 132.0f);
        func_0043C6E4(this);
        func_0066C424((char*)this + 0x98, 0);
    }
}
