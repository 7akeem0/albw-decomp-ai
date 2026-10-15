// 0x470498
extern "C" int func_00532C78(void*);
extern "C" void func_00368C3C(void*, int);
extern "C" void func_0066E304(void*, int) ;
struct Sub { char pad[0xc]; int mC; float m10; };
struct Cls { char pad[0xe0]; Sub* mE0; void f(); };
void Cls::f() {
    if (func_00532C78((char*)this + 0xcc) != 0) return;
    Sub* p = mE0;
    if ((float)p->mC != p->m10) return;
    func_00368C3C(p, 1);
    func_0066E304((char*)this + 0x74, 3);
}
