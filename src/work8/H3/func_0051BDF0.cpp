// func_0051BDF0: if (this->m74 != 1) { x = this->m70;
//   if (x && (x->m0d || x->m0e)) { func_0012C790(x); func_001B6B38(this->m70); }
//   func_0029E18C(this+0x64, 1); }
// if (this->m70) tail func_00472E5C(this->m70);

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;

struct Obj {
    char p0[0xd];
    u8 m0d;
    u8 m0e;
};

struct Self {
    char p0[0x64];
    char p1[0x70 - 0x64];
    Obj* m70;
    u16 m74;
};

extern "C" void func_0012C790(Obj* x);
extern "C" void func_001B6B38(Obj* x);
extern "C" void func_0029E18C(void* sub, s32 flag);
extern "C" void func_00472E5C(Obj* x);

void func_0051BDF0(Self* self) {
    if (self->m74 != 1) {
        Obj* x = self->m70;
        if (x != 0 && (x->m0d != 0 || x->m0e != 0)) {
            func_0012C790(x);
            func_001B6B38(self->m70);
        }
        func_0029E18C((char*)self + 0x64, 1);
    }
    if (self->m70 != 0) {
        func_00472E5C(self->m70);
    }
}
