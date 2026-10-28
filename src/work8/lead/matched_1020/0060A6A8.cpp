typedef unsigned int u32;
namespace std { struct nothrow_t {}; extern const nothrow_t nothrow; }
void* operator new(unsigned int, std::nothrow_t) throw();
struct Base_0026C850 {
    Base_0026C850(unsigned p);
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30();
    char pad[0x31c];
};
struct SV { virtual void s0(); };
struct C_006EBD08 : Base_0026C850, SV {
    char tail[0x5EC];
    C_006EBD08(unsigned p) : Base_0026C850(p) {}
};
extern "C" C_006EBD08* func_0060A6A8(unsigned a0)
{
    return new (std::nothrow) C_006EBD08(a0);
}
