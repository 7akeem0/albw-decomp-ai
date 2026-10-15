// 0x429240
extern "C" void func_004EBB58(void*);
extern "C" void func_003842C0(void*, int, int, int);
extern void* data_00711F50;
struct Cls {
    char pad1[0x48];
    void* m48;
    void f();
};
void Cls::f() {
    func_004EBB58(data_00711F50);
    float* p = (float*)((char*)m48 + 0x4e4);
    p[0] = 1.0f;
    p[1] = 1.0f;
    p[2] = 1.0f;
    func_003842C0((char*)m48 + 0x8c0, 0x12, 0xa, 1);
}
