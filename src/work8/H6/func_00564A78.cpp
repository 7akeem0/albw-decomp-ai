// 0x564A78: name lookup. Calls name->vslot2(), hashes name->m4 with 0x103CBC, then tail-falls into 0x564ABC.
typedef unsigned int u32;
typedef unsigned char u8;

struct Name58 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    const char* m4;
};

struct Tbl58 {
    u8 pad0[0x70];
    u32 m70;
};

struct Ctx58 {
    u8 pad0[8];
    Tbl58* m8;
};

struct Owner58 {
    u8 pad0[0x50];
    Ctx58* m50;
};

u32 func_00103CBC(const char* s);
u32 func_00564ABC(void* self, const char* name, u32 hash);

u32 func_00564A78(Owner58* self, Name58* name)
{
    Tbl58* t = self->m50->m8;
    name->v2();
    const char* s = name->m4;
    u8* base = (u8*)t + 0x70;
    u32 h = func_00103CBC(s);
    return func_00564ABC(base + 4, s, h);
}
