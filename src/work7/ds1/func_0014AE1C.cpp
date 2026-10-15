typedef unsigned char u8;
typedef signed char s8;
typedef signed int s32;

extern "C" void func_0019AA9C(void*, s32, s32);
extern "C" void* data_007124F0;

struct VBase {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6(s8);
};

struct S {
    u8 pad[0x22];
    s8 m22;
    u8 m23;
    u8 pad2[0x28 - 0x24];
    VBase* m28;
    void setKind(s8 v);
};

void S::setKind(s8 v) {
    if (m22 == v) return;
    if (m28) m28->v6(v);
    if (v == 0) {
        func_0019AA9C(data_007124F0, 2, 1);
        m23 = 1;
    }
    m22 = v;
}
