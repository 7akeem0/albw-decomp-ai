

typedef unsigned int u32;
typedef unsigned char u8;

struct Ring112 {
    u32 m00;
    u32 m04;
    u32 m08;
    u32 m0c;
};

struct Obj112 {
    u8 pad0[0x24];
    Ring112 r;
};

bool func_0052EF94(u32 node, u32 arg);

bool func_005471B4(Obj112* self, u32 arg)
{
    if (self->r.m08 == 0)
        return false;
    Ring112* x = &self->r;
    u32 a = self->r.m04;
    u32 b = self->r.m0c; 
    u32 r4 = a - b;
    __memory_changed();u32 r6=(u32)x-x->m0c;
    while (r4 != r6) {
        if (func_0052EF94(r4, arg))
            return true;
        r4 = *(u32*)(r4 + b + 4) - b;
    }
    return false;
}
