typedef unsigned int u32;
namespace std { struct nothrow_t {}; extern const nothrow_t nothrow; }
void* operator new(unsigned int, std::nothrow_t) throw();
extern "C" char ro_0069E100[];
struct SafeStringRef {};
class C_006F5980 : public SafeStringRef {
public:
    C_006F5980(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
struct Base_004D392C {
    Base_004D392C(unsigned p, const SafeStringRef& name);
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18();
    char pad[0x31c];
};
struct Mid_C_006D3D54 : Base_004D392C {
    Mid_C_006D3D54(unsigned p) : Base_004D392C(p, C_006F5980((const char*)ro_0069E100)) {}
};
struct SV { virtual void s0(); };
struct C_006D3D54 : Mid_C_006D3D54, SV {
    char tail[0x228];
    C_006D3D54(unsigned p) : Mid_C_006D3D54(p) {}
};
extern "C" C_006D3D54* func_00604B80(unsigned a0)
{
    return new (std::nothrow) C_006D3D54(a0);
}
