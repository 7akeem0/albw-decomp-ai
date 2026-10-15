// 0x473A5C
extern "C" void func_0034C0E4(void*, int, int, int);
struct GObj { char pad[0x8ec]; int m8ec; int m8f0; };
extern GObj* data_00711DE8;
struct Cls { char pad[0x9c]; void* m9c; void f(); };
void Cls::f() {
    func_0034C0E4(m9c, 0, data_00711DE8->m8ec, 0x12c);
}
