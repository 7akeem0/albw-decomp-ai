typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
namespace std { struct nothrow_t {}; extern const nothrow_t nothrow; }
void* operator new(unsigned int, std::nothrow_t) throw();
extern "C" char data_0070E6DC[];
extern "C" char bss_0077D0E0[];
extern "C" void func_004C03B8(unsigned, unsigned);
extern "C" void func_004BD280(unsigned, unsigned, unsigned);
extern "C" void func_00169A80(unsigned);
extern "C" void func_00168E9C(unsigned, unsigned, unsigned);
extern "C" void func_004BDB2C(unsigned, unsigned, float);
struct Flag32 { u32 v; void set(u32 m) { v |= m; } };
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
    char pad1[0x32 - 4];
    short m32;
    char pad2[0x320 - 0x34];
};
struct SV { virtual void s0(); };
struct C_006EF034 : Base_00339CC4, SV {
    char pad3[0x788 - 0x324];
    unsigned m788;
    char pad4[0x7A0 - 0x78C];
    unsigned m7A0;
    char pad5[0x7AC - 0x7A4];
    unsigned m7AC;
    char pad6[0x853 - 0x7B0];
    u8 m853;
    u8 pad7;
    u8 m855;
    char pad8[0x8AC - 0x856];
    Flag32 m8AC;
    char tail[0x98C - 0x8B0];
    C_006EF034(unsigned owner)
        : Base_00339CC4(owner, 4, data_0070E6DC, -1)
    {
        short levelSource = m32;
        func_004C03B8((unsigned)this, (unsigned)bss_0077D0E0);
        if (levelSource == 1) {
            u8 level = 3;
            m853 = level;
            m855 = level;
            m8AC.set(0x14);
            func_004BD280((unsigned)this, level, 0);
            func_00169A80(m7AC);
            unsigned node = m7AC;
            unsigned ownerId = m7A0;
            func_00168E9C(node, ownerId, 0);
            func_004BDB2C((unsigned)this, m788, 1.0f);
            *(float*)(m7A0 + 0x134) = 0.0f;
        }
    }
};
extern "C" C_006EF034* func_0060B410(unsigned owner)
{
    return new (std::nothrow) C_006EF034(owner);
}
