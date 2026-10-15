

typedef unsigned char u8; typedef signed char s8;
typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
extern "C" void func_00231524(void*);
extern "C" void func_00231448(void*);
extern "C" void func_002C00A8(void*);
struct Flag16{u16 v;Flag16(){}Flag16(u16 n):v(n){}void set(u16 mask){*this=Flag16(v|mask);}};struct Rec{u8 pad0[0x16];Flag16 m16;};
struct Obj {
    u8 pad0[0x14];
    Rec* m14;
    u8 pad1[0xb4 - 0x18];
    u8 mb4;
    u8 mb5;
    void f();
};
void Obj::f() {
    func_00231524((char*)this + 0x38);
    func_00231448((char*)this + 0x50);
    func_00231448((char*)this + 0x44);
    func_00231448((char*)this + 0x20);
    func_00231448((char*)this + 0x2c);
    func_00231448((char*)this + 0x68);
    if (mb5 == 0) {
        {Flag16*f=&m14->m16;f->set(2);}
        func_002C00A8(m14);
        {Flag16*f=&m14->m16;f->set(0x40);}
    }
    mb4 = 0;
}
