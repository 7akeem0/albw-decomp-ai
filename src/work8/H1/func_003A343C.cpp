typedef unsigned int u32;
typedef unsigned char u8;

class VBase3A {
public:
    virtual void vf0();
};
void func_003B0510(void* p);
void func_003BCD80(void* p);

struct Obj3A {
    u32 m0;
    VBase3A* m4;
    VBase3A* m8;
};

extern "C" void func_003A343C(Obj3A* self) {
    if (self->m4) self->m4->vf0();
    if (self->m8) self->m8->vf0();
    if ((void*)self->m4 != (u8*)self + 0x6f8) func_003B0510((u8*)self + 0x6f8);
    if ((void*)self->m4 != (u8*)self + 0x834) return func_003BCD80((u8*)self + 0x834);
}
