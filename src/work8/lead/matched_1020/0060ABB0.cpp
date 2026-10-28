typedef unsigned int u32;
namespace std { struct nothrow_t {}; extern const nothrow_t nothrow; }
void* operator new(unsigned int, std::nothrow_t) throw();
struct Base_001779DC {
    Base_001779DC(unsigned p);
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18();
    char pad[0x31c];
};
struct SV { virtual void s0(); };
struct C_006EC7C8 : Base_001779DC, SV {
    char tail[0x1EC];
    C_006EC7C8(unsigned p) : Base_001779DC(p) {}
};
extern "C" C_006EC7C8* func_0060ABB0(unsigned a0)
{
    return new (std::nothrow) C_006EC7C8(a0);
}
