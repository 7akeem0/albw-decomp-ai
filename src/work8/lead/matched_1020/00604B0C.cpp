typedef unsigned int u32;
namespace std { struct nothrow_t {}; extern const nothrow_t nothrow; }
void* operator new(unsigned int, std::nothrow_t) throw();
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
static inline C_006F5980 mapActorName()
{
    return C_006F5980("MapActor");
}
struct SV { SV() {} virtual void s0(); };
struct C_006D3C94 : Base_001BA8C4, SV {
    char tail[0x16C];
    C_006D3C94(unsigned p)
        : Base_001BA8C4(p, 1, mapActorName()), SV() { m2E0.set(1); }
};
extern "C" C_006D3C94* func_00604B0C(unsigned a0)
{
    return new (std::nothrow) C_006D3C94(a0);
}
