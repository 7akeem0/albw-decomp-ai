typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
namespace std { struct nothrow_t {}; extern const nothrow_t nothrow; }
void* operator new(unsigned int, std::nothrow_t) throw();
struct Base_00150E40 {
    Base_00150E40(unsigned p);
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18();
    char pad1[0x28]; u16 m2c; char pad2[0x320 - 0x2e];
};
struct SV { virtual void s0(); };
struct C_006E08EC : Base_00150E40, SV {
    char pad3[0x40c - 0x324]; u16 m40c; u8 m40e;
    C_006E08EC(unsigned p);
};
static __forceinline u16 loadBaseCopy(const C_006E08EC* self) { return self->m2c; }
inline C_006E08EC::C_006E08EC(unsigned p) : Base_00150E40(p), m40e(0)
{
    u16 value = loadBaseCopy(this);
    m40c = value;
}
extern "C" C_006E08EC* func_00607F84(unsigned a0)
{ return new (std::nothrow) C_006E08EC(a0); }
