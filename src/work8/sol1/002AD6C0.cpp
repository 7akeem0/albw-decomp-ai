

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;

struct Control2317 { u16 current, max; u32 pad4, param; };

struct Flag16 {
    u16 v;
    Flag16(){}
    Flag16(u16 n):v(n){}
    void reset(u16 mask){*this = Flag16((u16)(v & ~mask));}
    void set(u16 mask){*this = Flag16((u16)(v | mask));}
};

struct Vec3 { f32 x,y,z; void setZero(){ for(s32 i=0;i<3;++i)(&x)[i]=0.f; } };

struct Flag32 {
    u32 v;
    void change(u32 mask, bool on) { if (on) v |= mask; else v &= ~mask; }
    void set(u32 mask) { change(mask, true); }
    void reset(u32 mask) { change(mask, false); }
};
extern "C" void func_002ADE0C(void*);
extern "C" void func_004FBCC0(void*);
extern "C" void func_004FD0B4(void*);
extern "C" void func_002AD658(void*, int, u32, int, int, int);
void func_002AD6C0(char* self, u32 a1) {
    u32 key=a1;int f=1;
    func_002ADE0C(self);
    func_004FBCC0(*(void**)(self + 0x34));

    if (key == 0x12 || key == 0x13 || 2 == key || 0x1f == key) {
        f = 0;
    } else {

        func_004FD0B4(*(void**)(self + 0x34));
    }
    char* o = self + 0x100;
    func_002AD658(self, 0x13, key & 0xff, *(s8*)(o + 0x10), *(s8*)(o + 0x11), f);
}
