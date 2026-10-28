typedef unsigned int u32;
typedef unsigned char u8;
namespace std { struct nothrow_t {}; extern const nothrow_t nothrow; }
void* operator new(unsigned int, std::nothrow_t) throw();

extern "C" {
extern unsigned func_0054D89C(unsigned, unsigned);
extern void func_001511F0(unsigned, unsigned);
extern void func_001512E8(unsigned);
extern void func_00151148(unsigned, unsigned);
}

struct Base_0032740C {
    Base_0032740C(unsigned owner, unsigned mode);
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20();
    char pad[0x31C];
};

struct SV { virtual void s0(); };

struct C_006DC4CC : Base_0032740C, SV {
    char pad1[0x48C - 0x324];
    u8 m48C;
    char pad2[0x538 - 0x48D];
    u32 m538;
    C_006DC4CC(unsigned owner) : Base_0032740C(owner, 0)
    {
        m538 = func_0054D89C((unsigned)this, 0);
        if (m538 == 0) return;
        func_001511F0(m538, m538);
        func_001512E8(m538);
        if (m48C != 7) return;
        func_00151148(m538, 0);
    }
};

extern "C" C_006DC4CC* func_00606CC0(unsigned owner)
{
    return new (std::nothrow) C_006DC4CC(owner);
}
