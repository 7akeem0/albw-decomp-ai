typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
namespace std { struct nothrow_t {}; extern const nothrow_t nothrow; }
void* operator new(unsigned int, std::nothrow_t) throw();
extern "C" char data_00708998[];
extern "C" void func_0038F454(unsigned);
struct Flag {
    u32 v;
    __forceinline void set(u32 m) { v |= m; }
};
struct Base_00150E40 {
    Base_00150E40(unsigned p);
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18();
    char pad1[0x32 - 4];
    u16 m32;
    char pad2[0x2e0 - 0x34];
    Flag m2e0;
    char pad3[0x320 - 0x2e4];
};
struct SV { virtual void s0(); };
struct Mid_006E6E3C : Base_00150E40 {
    Mid_006E6E3C(unsigned p) : Base_00150E40(p) {}
};
struct C_006E6E3C : Mid_006E6E3C, SV {
    char pad4[0x40c - 0x324];
    u8 m40c;
    char tail[0x410 - 0x40d];
    C_006E6E3C(unsigned p) : Mid_006E6E3C(p), m40c(0)
    {
        m2e0.set(2);
        m40c = m32 & 1;
        func_0038F454((unsigned)this);
        u8* enabled = (u8*)(*(u32*)data_00708998 + 0x98);
        *enabled = true;
    }
};
extern "C" C_006E6E3C* func_006098F0(unsigned p)
{
    return new (std::nothrow) C_006E6E3C(p);
}
