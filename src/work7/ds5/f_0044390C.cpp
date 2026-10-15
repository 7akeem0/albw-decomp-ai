// 0x44390C
extern "C" unsigned int func_0034BB9C(void*);
extern "C" void func_0066C9D0(void*, int);
extern void* data_007142C8;
struct Sub { char pad[0x48]; float m48; };
struct Out { char pad[0x338]; int m338; };
struct Cls {
    char pad0[0x74];
    char m74[1];
    char pad1[0x98 - 0x75];
    Sub* m98;
    Sub* m9c;
    void f();
};
void Cls::f() {
    unsigned int a = func_0034BB9C(m98);
    unsigned int b = func_0034BB9C(m9c);
    if (a & b) func_0066C9D0((char*)this + 0x74, 1);
    ((Out*)data_007142C8)->m338 = (int)m9c->m48;
}
