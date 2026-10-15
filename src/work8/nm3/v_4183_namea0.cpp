extern "C" void func_00418498(void*, int);
extern "C" void func_0067F8D4(void*, int, float);
extern "C" void func_003DE188(int, float);
extern "C" void func_003E0B00(int, int);
struct Cls { void f(int i, int a); };
void Cls::f(int i, int a) {
    int idx = i;
    char* p = (char*)this + idx * 16;
    int* q = (int*)(p + 0x1c);
    if (q[1] < q[0]) func_00418498(this, idx);
    char* a0 = p + 0x14;
    func_0067F8D4(a0, 0, 1.0f);
    func_003DE188((signed char)idx, 1.0f);
    func_003E0B00((signed char)idx, a);
}
