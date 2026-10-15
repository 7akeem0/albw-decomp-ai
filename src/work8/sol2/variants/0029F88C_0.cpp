

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
extern "C" int func_00588BF0(void*, int);
extern "C" void func_004EBA2C(void*, int, int);
extern "C" void func_00588C14(void*, int, int);
extern void* data_00711F50;
u32 func_0029F88C(char* self) {
    *(u8*)(self + 0x423) = 1;
    int c=func_00588BF0(self,0);
    char* r4=self+0x400;
    if(c==0){
        s16 a = *(s16*)(r4 + 0x24);
        if (a != 0 || *(u16*)(r4 + 0x26) != 0) {
            func_004EBA2C(data_00711F50, a, *(s16*)(r4 + 0x26));
        }
    }
    func_00588C14(self, 0, 1);
    if (*(u8*)(r4 + 0x22) == 0) *(u8*)(self + 0x2d7) = 1;
    return 0;
}
