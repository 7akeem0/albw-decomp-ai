// 0x4705FC
extern "C" void func_004B964C(void*);
extern "C" void func_004B9998(void*);
extern "C" void func_004277DC(void*);
struct Cls { char pad[0x98]; void* m98; void f(); };
void Cls::f() {
    func_004B964C(this);
    func_004B9998(this);
    func_004277DC(m98);
}
