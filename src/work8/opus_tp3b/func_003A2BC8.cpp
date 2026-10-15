typedef unsigned int u32;
typedef unsigned char u8;

class VBase3A {
public:
    virtual void vf0(); virtual void vf1(); virtual void vf2(); virtual void vf3();
};
void func_003AFDB4(void* p);
void func_003BCCEC(void* p);

struct Obj3A {
    u32 m0;
    VBase3A* m4;
    VBase3A* m8;
};

extern "C" void func_003A2BC8(Obj3A* self) {
    if (self->m4) self->m4->vf3();
    if (self->m8) self->m8->vf3();
    if ((void*)self->m4 != (u8*)self + 0x6f8) func_003AFDB4((u8*)self + 0x6f8);
    if ((void*)self->m4 != (u8*)self + 0x834) return func_003BCCEC((u8*)self + 0x834);
}
