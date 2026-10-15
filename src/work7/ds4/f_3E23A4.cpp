typedef unsigned int u32;

struct P { u32 a, b, c; };
struct M { P p0, p1, p2; };

extern "C" void func_003E2E88(void* a, void* b, void* c);

extern "C" void func_003E23A4(char* self, void* arg) {
    M tmp;
    func_003E2E88(arg, self + 0x18, &tmp);
    *(P*)(self + 0x24) = tmp.p0;
    *(P*)(self + 0x30) = tmp.p1;
    *(P*)(self + 0x3c) = tmp.p2;
}
