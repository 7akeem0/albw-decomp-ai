typedef unsigned int u32;
typedef unsigned char u8;
namespace std { struct nothrow_t {}; extern const nothrow_t nothrow; }
void* operator new(unsigned int, std::nothrow_t) throw();
struct Vec3 { u32 x, y, z; };
extern "C" Vec3 data_007A9260;
struct Base_004ED00C {
    Base_004ED00C(unsigned p);
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    char pad[0x31c];
};
struct C_006DA6F0 : Base_004ED00C {
    Vec3 m320;
    u8 m32C;
    char tail[0x330 - 0x32D];
    C_006DA6F0(unsigned p) : Base_004ED00C(p)
    {
        m320 = data_007A9260;
        m32C = 0;
    }
};
extern "C" C_006DA6F0* func_006065B4(unsigned a0)
{
    return new (std::nothrow) C_006DA6F0(a0);
}

