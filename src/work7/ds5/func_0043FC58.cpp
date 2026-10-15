// 0x43FC58
extern "C" void func_0043F904(void*);

struct Sub {
    char pad[0x195];
    unsigned char m195;
};
struct Cls {
    char pad[0x74];
    Sub* m74;
    void f();
};
void Cls::f() {
    func_0043F904(this);
    Sub* s = m74;
    s->m195 = 1;
}
