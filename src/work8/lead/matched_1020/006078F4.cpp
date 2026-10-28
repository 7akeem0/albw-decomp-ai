typedef unsigned int u32;
typedef unsigned char u8;
namespace std { struct nothrow_t {}; extern const nothrow_t nothrow; }
void* operator new(unsigned int, std::nothrow_t) throw();
struct Vec3 { float x, y, z; };
extern "C" Vec3 data_007A9248;
extern "C" void func_003094A0(unsigned);
extern "C" void func_004D80A4(unsigned, unsigned, float, unsigned);
extern "C" void func_00115C54(unsigned, unsigned, unsigned);
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
struct C_006DF3B0 : Base_00309850, SV {
    char pad1[0x3e8 - 0x324];
    u32 m3e8;
    char pad2[0x418 - 0x3ec];
    unsigned m418;
    char pad3[0x424 - 0x41c];
    Vec3 m424;
    char pad4[0x436 - 0x430];
    u8 m436;
    u8 m437;
    char tail[0x458 - 0x438];
    C_006DF3B0(unsigned owner)
        : Base_00309850(owner, 3, 0, data_007A9248, 1, 0)
    {
        m436 = 0;
        m437 = 1;
        func_003094A0((unsigned)this);
        unsigned src = m418;
        float angle = *(float*)(src + 0x60);
        Vec3 out;
        func_004D80A4((unsigned)&out, m3e8, angle, src);
        out.y = 0.0f;
        {
            unsigned dst = (unsigned)&m424;
            func_00115C54(dst, dst, (unsigned)&out);
        }
    }
};
extern "C" C_006DF3B0* func_006078F4(unsigned owner)
{
    return new (std::nothrow) C_006DF3B0(owner);
}
