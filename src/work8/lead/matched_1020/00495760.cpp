typedef unsigned int size_t;
extern void* operator new(size_t size, unsigned heap, int align) throw();
struct Obj {
    Obj(unsigned a1, unsigned a2);
    unsigned char pad[0x30];
};
extern void func_004957A8(unsigned, Obj*);
struct Owner {
    unsigned char pad[0x140];
    unsigned f140;
    Obj* f144;
    void func_00495760(unsigned a1, unsigned a2);
};
void Owner::func_00495760(unsigned a1, unsigned a2)
{
    f144 = new (a2, 0x20) Obj(a1, a2);
    func_004957A8(f140, f144);
}
