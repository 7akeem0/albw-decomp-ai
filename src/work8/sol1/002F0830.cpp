

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
extern "C" int func_004EF418(void*, void*, int, int);
extern void* data_00709DF8;
struct Packet83{u8 key;u8 pad[3];u32 mode;u16 zero;u8 on;u8 pad2[5];void set(u8 key,u32 mode,u32 on){this->key=key;this->mode=mode;this->on=on;}};
void func_002F0830(char* self) {
    if (*(u8*)(self + 0xd46) != 1) return;
    char buf[0x10];
    *(u16*)(buf + 8) = 0;
    buf[0] = 0;
    *(u32*)(buf + 4) = 0;
    buf[0xa] = 0;
    if (*(u8*)(self + 0xd45) == 0) {
        ((Packet83*)buf)->set(8,6,1);
    }
    if (func_004EF418(data_00709DF8, buf, 0, 0) != 0) *(u8*)(self + 0xd46) = 2;
}
