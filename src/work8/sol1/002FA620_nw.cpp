

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
extern "C" u32 func_002F9EB4(void*);
extern "C" void func_00664230(void*, int) ;
struct S2FA620 { char pad[0x8bc]; u8 m8bc; char pad2[0x8e0 - 0x8bd]; u32 m8e0; u32 m8e4;
                 char pad3[0xa14 - 0x8e8]; u8 bA14; };
static bool ready5(const u32& cur,const u32& max){if(cur>=max)return true;return false;}
void func_002FA620(S2FA620* self) {
    u32 cur = self->m8e0;
    u32 max = self->m8e4;
    if (cur < max) self->m8e0 = cur + 1;
    if(!ready5(self->m8e0,max))return;
    u32 k = func_002F9EB4(self);
    self->bA14 = (u8)k;
    if (k == 4) func_00664230((char*)self + 0x8bc, 2);
    else func_00664230((char*)self + 0x8bc, 1);
}
