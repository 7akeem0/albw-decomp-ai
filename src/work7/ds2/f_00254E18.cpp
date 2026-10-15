typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;
struct SafeString { virtual ~SafeString() {} const char* str; SafeString(const char* s) : str(s) {} };
struct Sub { char pad0[0x16]; u16 m16; };
struct C {
    char pad0[0x14];
    Sub* m14;
    char pad18[0x38 - 0x18];
    char m38[4];
    void f();
};
bool func_005438EC(Sub* s);                     // 0x5438EC
void func_00231448(void* ctl);                  // 0x231448
void func_0012C718(C* self);                    // 0x12C718
void func_00533078(C* self, const SafeString& name, u32 v);   // 0x533078
void C::f() {
    if (!func_005438EC(m14))
        return;
    if ((m14->m16 & 4) == 0)
        return;
    func_00231448(m38);
    func_0012C718(this);
    func_00533078(this, SafeString("SE_S_TALK_NEXT"), 0);
}
