typedef unsigned int u32;
typedef int s32;
typedef unsigned char u8;

struct Str4EA17C {
    Str4EA17C();
    ~Str4EA17C();
    void init(u32 id);
    u8 pad[0x5c];
};
u32 func_001507D8(void* obj, u32 a1, Str4EA17C* s);

struct Obj4EA17C {
    u8 p0[0x5c];
    void* m5c;
};

extern "C" u32 func_004EA17C(Obj4EA17C* self, u32 a1, Str4EA17C* a2) {
    if (self->m5c != 0) {
        Str4EA17C tmp;
        Str4EA17C* s = a2;
        if (s == 0) s = &tmp;
        s->init(0x4000008);
        u32 r = func_001507D8(self->m5c, a1, s);
        return r;
    }
    return 0;
}
