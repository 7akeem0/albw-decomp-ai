// func_00569D04: if (this->m21c) { r = this->m21c->v2(arg); if (r) return r; }
// r = func_0056C508(this+0xc, arg); if (r) return r;
// return this->v4(arg);    (tail call through this's vtable slot 4)

typedef unsigned int u32;
typedef signed int s32;

struct Obj {
    virtual void d0();
    virtual void d1();
    virtual s32 v2(u32 a);
};

struct Self {
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual s32 v4(u32 a);
    char p0[0x21c - 4];
    Obj* m21c;
};

extern "C" s32 func_0056C508(void* sub, u32 a);

s32 func_00569D04(Self* self, u32 arg) {
    if (self->m21c != 0) {
        s32 r = self->m21c->v2(arg);
        if (r != 0) return r;
    }
    s32 r2 = func_0056C508((char*)self + 0xc, arg);
    if (r2 != 0) return r2;
    return self->v4(arg);
}
