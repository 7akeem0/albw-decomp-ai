typedef unsigned int u32;
typedef unsigned char u8;
namespace std { struct nothrow_t {}; extern const nothrow_t nothrow; }
void* operator new(unsigned int, std::nothrow_t) throw();
struct Vec3 {
    float x, y, z;
    Vec3(float a, float b, float c) : x(a), y(b), z(c) {}
};
extern "C" void func_003094A0(unsigned);
struct Base_00309850 {
    Base_00309850(unsigned owner, unsigned a, unsigned b, const Vec3& vec,
                   unsigned c, unsigned d);
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18();
    char pad[0x31c];
};
struct SV { virtual void s0(); };
struct C_006E7894 : Base_00309850, SV {
    char pad2[0x436 - 0x324];
    u8 m436;
    char tail[0x458 - 0x437];
    C_006E7894(unsigned owner)
        : Base_00309850(owner, 0, 1, Vec3(0.0f, 0.0f, -0.5f), 0, 0), m436(0)
    {
        func_003094A0((unsigned)this);
    }
};
extern "C" C_006E7894* func_00609C64(unsigned owner)
{
    return new (std::nothrow) C_006E7894(owner);
}
