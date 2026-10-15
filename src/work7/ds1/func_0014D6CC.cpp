typedef unsigned char u8;
typedef unsigned int u32;

extern "C" void* data_0070B800;
extern "C" void func_0012E60C(void*, u32);

struct V {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
};

struct S {
    u8 m0[0x10];
    u8 m10;
    u8 m11;
    u8 m12;
    u8 m13;
    V* m14;
    V* m18;
    u8 m1c[0x28 - 0x1c];
    V* m28;
    V* m2c;
    V* m30;
    void reset();
};

void S::reset() {
    m13 = 0;
    if (m14) m14->v17();
    if (m18) m18->v17();
    if (m28) m28->v17();
    if (m30) m30->v17();
    if (m2c) m2c->v17();
    func_0012E60C(data_0070B800, 0);
    m14 = 0;
    m18 = 0;
    m28 = 0;
    m2c = 0;
    m30 = 0;
    m10 = 0;
    m11 = 0;
    m12 = 0;
}
