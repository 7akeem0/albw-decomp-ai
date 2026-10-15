
typedef unsigned u32;
typedef unsigned long long u64;
struct Obj;
struct Owner { char p0[0xc4]; Obj* a[0x10]; char p1[0x20]; u32 m124; };
void func_005FEF2C(u32 n);
struct Pair{u32 lo,hi;};void func_004964F8(Obj*,void*,u32,u32,Pair);
void func_005FF5DC(Obj*);
void func_005FF580(Owner* self) {
    func_005FEF2C(0x400);
    Pair size;size.hi=0;size.lo=0x500;func_004964F8(self->a[self->m124],(char*)self+0xd4,0,0,size);
    func_005FEF2C(0x400);
    func_005FF5DC(self->a[self->m124]);
}
