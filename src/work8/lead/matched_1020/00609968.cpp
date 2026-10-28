typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
namespace std { struct nothrow_t {}; extern const nothrow_t nothrow; }
void* operator new(unsigned int, std::nothrow_t) throw();

extern "C" void func_0038F58C(unsigned);

struct Vec3 { u32 x; u32 y; u32 z; };

struct Base_004ED00C {
    Base_004ED00C(unsigned p);
    virtual void v0();
    char pad0[4];
    u32 m8;
    u32 mC;
    u32 m10;
    char pad1[0x320 - 0x14];
};

static Vec3* copyX(Vec3* dst, u32 value) { dst->x = value; return dst; }
static Vec3* copyY(Vec3* dst, u32 value) { dst->y = value; return dst; }
static void copyZ(Vec3* dst, u32 value) { dst->z = value; }

struct C_006E6EF4 : Base_004ED00C {
    Vec3 m320;
    u32 m32C;
    u8 m330;

    C_006E6EF4(unsigned p) : Base_004ED00C(p), m32C(0)
    {
        m330 = 0;
        Vec3* rest = copyX(&m320, m8);
        rest = copyY(rest, mC);
        copyZ(rest, m10);
        if (*(u16*)((char*)p + 0x2A) == 1) {
            m330 = 1;
            func_0038F58C((unsigned)this);
        }
    }
};

extern "C" C_006E6EF4* func_00609968(unsigned p)
{
    return new (std::nothrow) C_006E6EF4(p);
}
