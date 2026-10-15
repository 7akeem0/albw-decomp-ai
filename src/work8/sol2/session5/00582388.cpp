typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct Tbl {
    char pad0[8];
    s32 m8;
    u32* mC;
    u32& at(s32 i) { u32* p = mC; if ((u32)i < (u32)m8) p = &mC[i]; return *p; }
};
struct Self { char pad0[0x18]; Tbl* m18; };

u32 byte4(u32 v,u32 shift){u32 x=v<<shift;return x>>24;}
void func_00582388(u32* out, Self* self, s32 idx) {
    u32 r;
    if (idx < 0 || !self->m18 || self->m18->m8 <= idx) {
        r = 0xff000000;
    } else {
        u32 v = self->m18->at(idx);
u32 t=byte4(v,16);u32 low=v<<24;u32 r0=low|(t<<16);t=byte4(v,8);r0|=t<<8;r=r0|(v>>24);
    }
    *out = r;
}
