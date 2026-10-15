// func_004EB658: if (!this->m5c) return 0; Req req; req.set(0x4000008);
// r = func_0014DBF4(this->m5c, a1, a2, &req); return r;   (req: 0x60-byte temp, out-of-line ctor/dtor)

typedef unsigned int u32;
typedef signed int s32;

struct Req {
    Req();
    ~Req();
    void set(u32 flags);
    char p0[0x60];
};

extern "C" s32 func_0014DBF4(void* x, u32 a1, u32 a2, Req* req);

struct Owner {
    char p0[0x5c];
    void* m5c;
};

s32 func_004EB658(Owner* self, u32 a1, u32 a2) {
    if (self->m5c == 0) return 0;
    Req req;
    req.set(0x4000008);
    s32 r = func_0014DBF4(self->m5c, a1, a2, &req);
    return r;
}
