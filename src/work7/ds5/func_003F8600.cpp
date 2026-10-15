// 0x3F8600
extern "C" void func_003F6FF4(void*, int, void*);
extern const char ro_006EFE74[];
struct Obj {
    virtual void v0();
    virtual void v1();
    virtual int v2();
    virtual int v3();
};
struct Cls {
    void* vt;
    unsigned char m4;
    void* f(Obj* a);
};
void* Cls::f(Obj* a) {
    *(const char**)this = ro_006EFE74;
    m4 = 0;
    if (a->v3() != 0) func_003F6FF4(this, a->v3(), a);
    return this;
}
