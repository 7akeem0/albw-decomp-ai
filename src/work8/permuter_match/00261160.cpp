

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;

struct Control2317 {
u16 current, max;
u32 pad4, param;
};

struct Flag16 {
    u16 v;
    Flag16(){
}
    Flag16(u16 n):v(n){
}
    void reset(u16 mask){
*this = Flag16((u16)(v & ~mask));
}
    void set(u16 mask){
*this = Flag16((u16)(v | mask));
}
};

struct Vec3 {
f32 x,y,z;
void setZero(){
for(s32 i=0;i<3;++i)(&x)[i]=0.f;
}
};

struct Flag32 {
    u32 v;
    void change(u32 mask, bool on) {
if (on) v |= mask;
else v &= ~mask;
}
    void set(u32 mask) {
change(mask, true);
}
    void reset(u32 mask) {
change(mask, false);
}
};
extern "C" void* data_00706E20;
extern "C" char ro_006CE0C0[];
extern "C" u32 func_0052FCA4(void*, void*, u32);
struct Big {
char pad[0x3dbbc];
void* m3dbbc;
u32 m3dc0;
char pad2[0x3dc8-0x3dc4];
u32 m3dc8;
};
int func_00261160(void) {
  int perm_t3;
    Big* big = (Big*)data_00706E20;
    if (big == 0) return 0;
    void* tmp = ro_006CE0C0;
__schedule_barrier();
    u8* base = (u8*)&big->m3dbbc;
    void * tmp_c33 = tmp;
    u32 r = func_0052FCA4(base, &tmp_c33, *(u32*)(base + 4));
    perm_t3 = big->m3dc8; return r != perm_t3;
}
