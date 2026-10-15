typedef unsigned int u32;
typedef unsigned long long u64;
typedef unsigned char u8;

struct Obj496160 {
    u8 p0[0xcc];
    void* mCC[22];
    u32 m124;
};
void func_005FEF2C(u32 id);
void func_004964F8(void* a, void* b, u32 c, u32 d, u64 e);
void func_005FF5DC(void* o);

extern "C" void func_00496160(Obj496160* self) {
    func_005FEF2C(0x401);
    u64 t = 0x500;
    func_004964F8(self->mCC[self->m124], (u8*)self + 0xd4, 0, 0, t);
    func_005FEF2C(0x401);
    func_005FF5DC(self->mCC[self->m124]);
}
