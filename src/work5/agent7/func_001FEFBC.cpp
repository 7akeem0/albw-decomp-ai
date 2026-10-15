typedef unsigned int u32;
typedef int s32;
typedef unsigned char u8;
typedef float f32;
namespace sead {
typedef char T;
struct SafeStringBase {
    static const T cNullChar;
    SafeStringBase() : mStringTop(&cNullChar) {}
    SafeStringBase(const T* s) : mStringTop(s) {}
    virtual ~SafeStringBase() {}
    virtual void assureTerminationImpl_() const;
    const T* cstr() const { assureTerminationImpl_(); return mStringTop; }
    const T* mStringTop;
};
typedef SafeStringBase SafeString;
}
extern const char str_00694EBC[];   // "World"
struct CreateArg {
    sead::SafeString m0;
    u32 m8, mC;
    s32 m10;
    u32 m14, m18, m1c, m20, m24, m28;
    sead::SafeString m2c;
    struct B5 { u8 a, b, c, d, e; B5(u8 y, u8 x) : a(x), b(y), c(0), d(0), e(0) {} } m34;
    sead::SafeString m3c;
    u32 m44, m48;
    u8 m4c;
    CreateArg(const sead::SafeString& res) : m8(0), mC(0), m10(0x20), m14(0), m18(0), m1c(0), m20(0), m24(0), m28(0), m2c(str_00694EBC),
                  m34(4, 7), m3c(res), m44(0), m48(0), m4c(1) {}
};
struct Mgr70BC28;
extern Mgr70BC28* data_0070BC28;
u32 func_00504D48(Mgr70BC28* m, const CreateArg& a);
struct ObjEFBC {
    virtual void vf0();
    u32 m4;
    virtual void create(const sead::SafeString& name);
};
void ObjEFBC::create(const sead::SafeString& name) {
    CreateArg a(sead::SafeString(name.cstr()));
    a.m3c = name;
    m4 = func_00504D48(data_0070BC28, a);
}
