typedef unsigned int u32;
typedef unsigned char u8;
namespace std { struct nothrow_t {}; extern const nothrow_t nothrow; }
void* operator new(unsigned int, std::nothrow_t) throw();
extern "C" char data_0070E928[];
extern "C" char bss_0077D4F0[];
extern "C" void func_004C03B8(unsigned, unsigned);
struct Base_00339CC4 {
    Base_00339CC4(unsigned owner, unsigned tag, void* data, int reserved);
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    char pad[0x31c];
};
struct SV { virtual void s0(); };
struct C_006D8FD8 : Base_00339CC4, SV {
    char pad2[0x5ED];
    u8 m911;
    char tail[0x7A];
    C_006D8FD8(unsigned owner)
        : Base_00339CC4(owner, 4, data_0070E928, -1), m911(3)
    {
        func_004C03B8((unsigned)this, (unsigned)bss_0077D4F0);
    }
};
extern "C" C_006D8FD8* func_00606084(unsigned a0)
{
    return new (std::nothrow) C_006D8FD8(a0);
}
