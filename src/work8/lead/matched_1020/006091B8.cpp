typedef unsigned int u32;
namespace std { struct nothrow_t {}; extern const nothrow_t nothrow; }
void* operator new(unsigned int, std::nothrow_t) throw();
struct Base_00334104 {
    Base_00334104(unsigned p, unsigned a1);
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18();
    char pad[0x31c];
};
struct SV { virtual void s0(); };
struct C_006E51B8 : Base_00334104, SV {
    char tail[0x114];
    C_006E51B8(unsigned p) : Base_00334104(p, 1) {}
};
extern "C" C_006E51B8* func_006091B8(unsigned a0)
{
    return new (std::nothrow) C_006E51B8(a0);
}
