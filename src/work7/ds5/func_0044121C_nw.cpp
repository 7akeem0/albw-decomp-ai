// 0x44121C
extern "C" int func_001788DC(void*);
extern "C" void func_0066C748(void*, int) ;
struct Cls {
    char pad1[0x74];
    char pad2[0x90 - 0x74];
    unsigned char m90;
    void f();
};
struct Sub {
    void* m0;
    char pad[0xc];
    unsigned char m10;
};
void Cls::f() {
    if (m90 != 4) return;
    Sub* p = (Sub*)((char*)this + 0x74);
    p->m10 = (unsigned char)func_001788DC(p->m0);
    void** vt = *(void***)this;
    if (((int(*)(void*))vt[37])(this) != 0) func_0066C748((char*)this + 0x8c, 5);
    else func_0066C748((char*)this + 0x8c, 1);
}
