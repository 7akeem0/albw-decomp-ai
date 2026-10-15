typedef unsigned int u32;
typedef unsigned char u8;

struct Obj {
    void** vt;
};

struct Self {
    u8 pad0[0x50];
    u32 m50;
    u8 pad54[4];
    void** m58;
};

extern "C" u32 func_0057D224(Obj*);

extern "C" u32 func_0057DDE0(Self* self) {
    void** it = self->m58;
    for (;;) {
        void** end = self->m58 + self->m50;
        if (it == end) goto done;
        Obj* o = (Obj*)*it;
        if (func_0057D224(o) != 0) return 1;
        it++;
    }
done:
    return 0;
}
