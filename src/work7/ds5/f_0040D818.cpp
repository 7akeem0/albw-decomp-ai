// 0x40D818
extern "C" void func_001163A0(void*, void*, void*);
struct Node {
    virtual void v0();
    virtual void v1();
    virtual void* v2(void*);
};
struct Arg {
    void* m0;
    void* m4;
    Node* m8;
    void* mC;
    void* m10;
};
struct Quad { void* w0; void* w1; void* w2; void* w3; };
struct Cls {
    char pad[0x1c];
    Quad m1c;
    void* m2c;
    void f(Arg* a);
};
void Cls::f(Arg* a) {
    void* r = a->m8->v2(a->m10);
    if (r == 0) return;
    func_001163A0(r, a->mC, a->m10);
    Quad q;
    q.w0 = a->m0;
    q.w1 = a->m4;
    q.w2 = a->m8;
    q.w3 = r;
    m2c = a->m10;
    m1c = q;
}
