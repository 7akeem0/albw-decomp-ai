// 0x46CD44
extern "C" int func_0034BB9C(void*);
extern "C" void func_0066E07C(void*, int);
extern void* data_007142C8;
struct Cls {
    char pad1[0xb4];
    void* mB4;
    void* mB8;
    void f();
};
void Cls::f() {
    int a = func_0034BB9C(mB4);
    int b = func_0034BB9C(mB8);
    if (a & b) func_0066E07C((char*)this + 0x74, 4);
    int v = (int)*(float*)((char*)mB8 + 0x48);
    *(int*)((char*)data_007142C8 + 0x338) = v;
}
