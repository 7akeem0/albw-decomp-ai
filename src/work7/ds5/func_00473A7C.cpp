// 0x473A7C
extern "C" void func_0034C0E4(void*, int, int, int);
struct GObj { char pad[0x8ec]; int m8ec; int m8f0; };
extern GObj* data_00711DE8;
struct Cls { char pad[0x98]; void* m98; void f(); };
void Cls::f() {
    func_0034C0E4(m98, 0, data_00711DE8->m8f0, 0x12c);
}
