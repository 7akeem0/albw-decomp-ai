typedef unsigned int u32; typedef int s32; typedef float f32; typedef unsigned char u8;
struct SafeString {
    virtual void assureTermination();
    const char* mStr;
    SafeString(const char* s) : mStr(s) {}
};
struct Obj;
void func_0010A464(void*);
u32 func_00150A84(Obj*, const SafeString&, void*);
void func_0025B838(void*, f32, s32);
void func_0025B84C(void*);
void func_001891A0(Obj*);
s32 func_00187C38(Obj*);
s32 func_00521064(Obj*);
s32 func_00520EE4(Obj*);
s32 func_00520ED8(Obj*);
__attribute__((weak)) void func_00659544(void*, s32);
struct Obj {
    u8 pad[0x3e0]; f32 m3e0; u8 pad3e4[0x4fc - 0x3e4]; u8 m4fc[4];
    void f();
};
void Obj::f() {
    if (func_00187C38(this)) {
        if (func_00521064(this)) m3e0 = -0.0125f;
        if (func_00520EE4(this)) {
            func_00659544(m4fc, 8);
        } else if (func_00520ED8(this)) {
            u8 buf[0x60];
            func_0010A464(buf);
            func_00150A84(this, SafeString("SE_OBJ_FALL_WATER_FLAT"), buf);
            func_0025B838(buf, 0.5f, 0);
            func_001891A0(this);
            func_0025B84C(buf);
        }
    }
}
