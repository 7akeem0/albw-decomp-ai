typedef unsigned int u32;
typedef unsigned char u8;
namespace std { struct nothrow_t {}; extern const nothrow_t nothrow; }
void* operator new(unsigned int, std::nothrow_t) throw();
extern "C" char data_0070DEB8[];
extern "C" char bss_00773A04[];
extern "C" void func_004C03B8(unsigned, unsigned);
extern "C" void func_004C0808(unsigned, unsigned, unsigned, float, unsigned);
struct Base_00182E50 {
    Base_00182E50(unsigned p);
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    char pad[0x31c];
};
struct SV { virtual void s0(); };
struct C_006DFA4C : Base_00182E50, SV {
    char pad2[0x998 - 0x324];
    u8 m998;
    char tail[0x99C - 0x999];
    __forceinline void init()
    {
        func_004C0808((unsigned)this, 1, (unsigned)data_0070DEB8, 0.0f, 0);
    }
    C_006DFA4C(unsigned p) : Base_00182E50(p), m998(0)
    {
        func_004C03B8((unsigned)this, (unsigned)bss_00773A04);
        init();
    }
};
extern "C" C_006DFA4C* func_00607C9C(unsigned a0)
{
    return new (std::nothrow) C_006DFA4C(a0);
}

