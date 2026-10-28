typedef unsigned int u32;
namespace std { struct nothrow_t {}; extern const nothrow_t nothrow; }
void* operator new(unsigned int, std::nothrow_t) throw();
extern "C" char ro_0069DCC8[];
extern "C" unsigned func_0054D89C(unsigned, unsigned);
extern "C" void func_001511F0(unsigned);
extern "C" void func_001512E8(unsigned);
struct Base_0032740C {
    Base_0032740C(unsigned p, unsigned name);
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    char pad[0x31c];
};
struct SV { virtual void s0(); };
struct C_006DC40C : Base_0032740C, SV {
    char pad2[0x538 - 0x324];
    unsigned m538;
    C_006DC40C(unsigned p);
};
C_006DC40C::C_006DC40C(unsigned p)
    : Base_0032740C(p, (unsigned)ro_0069DCC8)
{
    m538 = func_0054D89C((unsigned)this, 0);
    if (m538 == 0)
        return;
    func_001511F0(m538);
    func_001512E8(m538);
}
extern "C" C_006DC40C* func_00606C44(unsigned a0)
{
    return new (std::nothrow) C_006DC40C(a0);
}

