typedef unsigned char u8;

struct VB {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3(void*);
};

struct S {
    void* m0;
    void* m4;
    void* m8;
    void* mC;
    void* m10;
    void* m14;
    u8 pad[0x30 - 0x18];
    VB* m30;
    u8 padB[4];
    u8 m38;
    u8 m39;
    void f(void* p);
};

void S::f(void* p) {
    if (m30) {
        if (m0) m30->v3(m0);
        if (m4) m30->v3(m4);
    }
    m0 = 0; m8 = 0; m10 = 0; m38 = 0;
    m4 = 0; mC = 0; m14 = 0; m39 = 0;
    __schedule_barrier();
    m30 = (VB*)p;
}
