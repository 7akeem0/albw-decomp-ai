typedef unsigned int u32;
namespace std { struct nothrow_t {}; extern const nothrow_t nothrow; }
void* operator new(unsigned int, std::nothrow_t) throw();

struct VC_0 { virtual void s0(); virtual void s1(); virtual unsigned f(); };

extern "C" {
extern char data_0070FB60[];
extern unsigned func_003529A0(unsigned, unsigned, unsigned);
extern unsigned func_00556E64(unsigned);
extern void func_002C41BC(unsigned, unsigned, unsigned);
}

struct Base_00150E40 {
    Base_00150E40(unsigned p);
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18();
    char pad1[0x2D0 - 4];
    u32 m2D0;
    char pad2[0x320 - 0x2D4];
};

struct SV { virtual void s0(); };

struct C_006D1B40 : Base_00150E40, SV {
    char tail[0x40C - 0x324];

    C_006D1B40(unsigned owner);
};

C_006D1B40::C_006D1B40(unsigned owner) : Base_00150E40(owner)
{
    unsigned lv[10];
    unsigned r0, t4, t7, t11, t12;

    t4 = *(unsigned*)((char*)this + 0x2D0);
    t4 += 0xC;
    ((VC_0*)t4)->f();

    t7 = *(unsigned*)((char*)t4 + 4);
    func_003529A0((unsigned)&lv[0], t7,
                  (unsigned)((char*)this + 0x320));
    *(unsigned*)((char*)&lv[3]) = (unsigned)((char*)this + 0x3D0);
    *(unsigned*)((char*)&lv[7]) = *(short*)((char*)owner + 0x28);

    t11 = *(unsigned*)data_0070FB60;
    if (t11 != 0) {
        t12 = func_00556E64(t11);
        r0 = (t12 != 0);
        if (t12 != 0) goto L4;
    }
    r0 = 0;
L4:
    *(unsigned*)((char*)&lv[6]) = r0;
    func_002C41BC((unsigned)((char*)this + 0x320),
                  (unsigned)&lv[0], (unsigned)this);
}

extern "C" C_006D1B40* func_00604598(unsigned a0)
{
    return new (std::nothrow) C_006D1B40(a0);
}
