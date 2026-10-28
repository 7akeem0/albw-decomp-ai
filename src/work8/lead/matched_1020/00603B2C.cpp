typedef unsigned int u32;
namespace std { struct nothrow_t {}; extern const nothrow_t nothrow; }
void* operator new(unsigned int, std::nothrow_t) throw();
extern "C" char ro_0069E10C[];
struct SafeStringRef {};
struct Flag { u32 v; void set(u32 m) { v |= m; } };
class C_006F5980 : public SafeStringRef {
public:
    C_006F5980(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
struct Base_001BA8C4 {
    Base_001BA8C4(unsigned p, unsigned a1, const SafeStringRef& name);
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    char pad1[0x2DC];
    Flag m2E0;
    char pad2[0x3C];
};
struct Mid_C_006CF0B4 : Base_001BA8C4 {
    Mid_C_006CF0B4(unsigned p) : Base_001BA8C4(p, 1, C_006F5980((const char*)ro_0069E10C)) { m2E0.set(0x1);}
};
struct SV { virtual void s0(); };
struct C_006CF0B4 : Mid_C_006CF0B4, SV {
    char tail[0x16C];
    C_006CF0B4(unsigned p) : Mid_C_006CF0B4(p) {}
};
extern "C" C_006CF0B4* func_00603B2C(unsigned a0)
{
    return new (std::nothrow) C_006CF0B4(a0);
}
