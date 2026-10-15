

typedef unsigned char u8; typedef signed char s8;
typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
extern "C" void func_004A9948(void*, void*, s32);
extern "C" void func_004A9120(void*,void*);
extern void* data_00709D28;
struct Obj {
    virtual void f(bool on);
    u8 pad4[0xcc - 4];
    u8 mCc[0xc];
    u8 padD8[0x140 - 0xd8];
    s8 m140;
};
void Obj::f(bool on) {
    void*const& source4=data_00709D28;void*mgr=source4;
    if (on) {
        if (m140 == 0) {
            func_004A9948(mgr, mCc, 12);
            m140 = 1;
        }
    } else {
        if (m140 != 0) {
            func_004A9120(mgr,mCc);
            m140 = 0;
        }
    }
}
