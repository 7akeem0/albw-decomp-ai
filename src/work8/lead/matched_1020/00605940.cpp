typedef unsigned int u32;
namespace std { struct nothrow_t {}; extern const nothrow_t nothrow; }
void* operator new(unsigned int, std::nothrow_t) throw();
struct SafeStringRef {};
class C_006F5980 : public SafeStringRef {
public:
    C_006F5980(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
struct Base_001BA8C4 {
    Base_001BA8C4(unsigned p, unsigned a1, const SafeStringRef& name);
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    char pad[0x31c];
};
struct Mid_C_006D791C : Base_001BA8C4 {
    Mid_C_006D791C(unsigned p) : Base_001BA8C4(p, 1, C_006F5980("MapActor")) {}
};
struct SV { virtual void s0(); };
struct C_006D791C : Mid_C_006D791C, SV {
    char tail[0x16C];
    C_006D791C(unsigned p) : Mid_C_006D791C(p) {}
};
extern "C" C_006D791C* func_00605940(unsigned a0)
{
    return new (std::nothrow) C_006D791C(a0);
}
