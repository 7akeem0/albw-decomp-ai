// 0x3F3544
struct X {
    void** vt;
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3(X* p);
};
struct Cls {
    void* m0;
    void* m4;
    char pad1[0x30 - 8];
    X* m30;
    void f();
};
void Cls::f() {
    if (m30 != 0) {
        for (int i = 0; i < 2; i++) {
            X* p = ((X**)this)[i];
            if (p != 0) {
                m30->v3(p);
                *(void**)((char*)this + i * 4 + 8) = 0;
                *(void**)((char*)this + i * 4 + 0x10) = 0;
                ((void**)this)[i] = 0;
            }
            *(unsigned char*)((char*)this + i + 0x38) = 0;
        }
        m30 = 0;
    }
}
