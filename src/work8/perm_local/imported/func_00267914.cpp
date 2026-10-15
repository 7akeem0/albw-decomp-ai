

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
struct Sub9ac {
char p[0xf4];
};
struct S267914 {
char pad[0x59c];
u32 m59c;
char pad2[0x9ac-0x5a0];
Sub9ac sub;
u8 bAA0;
};
extern "C" void* data_00711F50;
extern "C" u32 data_006934FC;
extern "C" void func_004E9CD4(void*);
extern "C" void func_0036C408(void*, u32);
extern "C" void func_0036BA20(void*);
void func_00267914(S267914* self) {
  S267914 * perm_t85;
    func_004E9CD4(data_00711F50);
    func_0036C408(&self->sub, data_006934FC);
    func_0036BA20(&self->sub);
    self->bAA0 = 0;
__schedule_barrier();
    perm_t85 = self; perm_t85->m59c |= 0x80;
}
