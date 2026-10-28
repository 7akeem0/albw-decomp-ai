typedef unsigned int u32;
namespace std { struct nothrow_t {}; extern const nothrow_t nothrow; }
void* operator new(unsigned int, std::nothrow_t) throw();

extern "C" {
extern char data_0070E70C[];
extern char bss_0077D130[];
extern void func_004C03B8(unsigned, unsigned);
}

struct Base_00339CC4 {
    Base_00339CC4(unsigned owner, unsigned tag, void* data, int reserved);
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    char pad[0x31C];
};

struct SV { virtual void s0(); };
struct ThreeWords { u32 first; u32 second; u32 third; };

struct C_006C7064 : Base_00339CC4, SV {
    char pad1[0x8B8 - 0x324];
    float m8B8;
    char pad2[0x938 - 0x8BC];
    ThreeWords m938;
    u32 m944;
    char tail[0x98C - 0x948];

    C_006C7064(unsigned owner)
        : Base_00339CC4(owner, 5, data_0070E70C, 4)
    {
        func_004C03B8((unsigned)this, (unsigned)bss_0077D130);
        m8B8 = 0.08f;
        const u32 scale = 0x038E38E0;
        const u32 offset = 0x00B60B60;
        m938.first = scale;
        m938.second = scale << 2;
        m938.third = offset;
        m944 = scale - offset;
    }
};

extern "C" C_006C7064* func_00602D08(unsigned owner)
{
    return new (std::nothrow) C_006C7064(owner);
}
