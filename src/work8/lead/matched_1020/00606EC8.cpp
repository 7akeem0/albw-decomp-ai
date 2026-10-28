typedef unsigned int u32;
typedef unsigned char u8;
namespace std { struct nothrow_t {}; extern const nothrow_t nothrow; }
void* operator new(unsigned int, std::nothrow_t) throw();

extern "C" {
extern char data_0070E9C4[];
extern char bss_0077D6A8[];
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
struct Flag32 { u32 value; void set(u32 mask) { value |= mask; } };
struct FourWords { u32 a; u32 b; u32 c; u32 d; };

struct C_006DC984 : Base_00339CC4, SV {
    char pad1[0x8AC - 0x324];
    Flag32 m8AC;
    char pad2[0x911 - 0x8B0];
    u8 m911;
    char pad3[0x938 - 0x912];
    FourWords m938;
    char tail[0x98C - 0x948];

    C_006DC984(unsigned owner)
        : Base_00339CC4(owner, 4, data_0070E9C4, -1)
    {
        m911 = 3;
        func_004C03B8((unsigned)this, (unsigned)bss_0077D6A8);
        m8AC.set(0x20);
        m938.a = 0x02222220;
        m938.b = 0x04FA4FA0;
        m938.c = 0x016C16C0;
        m938.d = 0x02D82D80;
    }
};

extern "C" C_006DC984* func_00606EC8(unsigned owner)
{
    return new (std::nothrow) C_006DC984(owner);
}
