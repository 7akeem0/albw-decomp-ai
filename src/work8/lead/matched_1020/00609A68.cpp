typedef unsigned int u32;
namespace std { struct nothrow_t {}; extern const nothrow_t nothrow; }
void* operator new(unsigned int, std::nothrow_t) throw();

struct Obj4;
extern "C" Obj4* func_0054D964(unsigned, unsigned);
extern "C" void func_004356B4(Obj4*);
extern "C" void func_00393648(unsigned);

struct BFlag {
    u32 v;
    __forceinline void change(u32 mask, bool set)
    {
        if (set)
            v |= mask;
        else
            v &= ~mask;
    }
};

struct Base_00150E40 {
    Base_00150E40(unsigned p);
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
    virtual void v18();
    char pad1[0x2e0 - 4];
    BFlag m2e0;
    char pad2[0x320 - (0x2e0 + 4)];
};

struct SV { virtual void s0(); };

struct C_006E7280 : Base_00150E40, SV {
    char pad3[0x40c - 0x324];
    Obj4* m40c;

    C_006E7280(unsigned p) : Base_00150E40(p)
    {
        Obj4* obj = func_0054D964((unsigned)this, 0);
        m40c = obj;
        m2e0.change(2, true);
        func_004356B4(obj);
        func_00393648((unsigned)this);
    }
};

extern "C" C_006E7280* func_00609A68(unsigned a0)
{
    return new (std::nothrow) C_006E7280(a0);
}
