
typedef unsigned int u32;
typedef unsigned char u8;
typedef signed char s8;
typedef float f32;

extern "C" void func_001214F4(void*, u32, u32);
extern "C" void func_0013080C(void*, void*);
extern "C" void func_0012FD38(void*, void*);
extern "C" void func_001215C0(void*);
extern void* data_0070B960;

struct S {
    char pad0[0x14];
    u32  m14;   
    char pad1[0x1c - 0x18];
    u32  m1c;   
    char pad2[0x26 - 0x20];
    s8   m26;   
};

struct T {
    char pad0[0x14];
    u8   m14;   
    char pad1[0xa4 - 0x15];
    f32  ma4;   
    f32  ma8;   
    char pad2[0x1cc - 0xac];
    u32  m1cc;  
    u32  m1d0;  
    u32  m1d4;  
    u32  m1d8;  
    u32  m1dc;  
};

template<class T0> inline void hlp0(T0 self) { self->m14 = 1;
    self->ma8 = 40.0f; }
void f(T* self, u32 a1, u32 a2, S* a3) {
    func_001214F4(self, a1, a2);
    self->m1d8 = (u32)a3;
    int v = a3->m14;
    self->m1cc = v;
    self->m1d0 = a3->m1c;
    self->m1d4 = (u32)a3->m26;
    self->m1dc = v;
    self->ma4 = 0.2f; 
    hlp0(self);
    func_0013080C(data_0070B960, (u8*)self + 0x10);
    func_0012FD38(data_0070B960, (u8*)self + 0x114);
    func_001215C0(self);
}
