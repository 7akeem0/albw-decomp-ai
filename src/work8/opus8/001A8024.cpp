typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
namespace sead { struct SafeString { SafeString(const char* s) : mStringTop(s) {} virtual void assureTerminationImpl_() const; const char* mStringTop; }; }
f32 func_004F898C();
void func_004F8964(f32* vy, bool clamp, f32 g);
struct Obj8E4 { char pad[0x61]; u8 b61; };
struct Sm8BC { s32 m0; void func_0065A840(s32 n); bool gt(s32 x) const { return m0 > x; } bool lt(s32 x) const { return x < m0; } };
struct Kodongo {
    char pad0[0x3e0]; f32 m3e0;
    char pad3e4[0x8bc - 0x3e4]; Sm8BC m8bc;
    char pad8c0[0x8e4 - 0x8c0]; Obj8E4* m8e4;
    char pad8e8[0x91c - 0x8e8]; s32 m91c;
    char pad920[0x92c - 0x920]; s32 m92c;
    char pad930[0x937 - 0x930]; u8 b937;
    char pad938[0x95c - 0x938]; f32 m95c; char m960[4];
    void func_001A7B50(void* p);
    void func_001A786C(s32 n);
    f32 func_005287F4(s32 a, s32 b, s32* c);
    void func_001507D8(const sead::SafeString& s, s32 n);
    void update();
};

void Kodongo::update()
{
    func_004F8964(&m3e0, true, func_004F898C());
    func_001A7B50(m960);
    func_001A786C(0);
    s32 v = b937 ? m91c : 0;
    m95c = func_005287F4(0, 0, &v);
    { Sm8BC* sm = &m8bc; if (m92c < sm->m0 || !m8e4->b61) sm->func_0065A840(6); }
    func_001507D8("SE_Kodongo_FRAME", 0);
}
