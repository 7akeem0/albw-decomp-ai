// func_004C0684: t = reset(this, 0, extra, 0, 0,0,0) (r2 passes through); this->m7a8 = t;
// if (name) { if (t) t->m134 = 0.0f; this->m900 = this->m7a0->find(name); }

typedef unsigned int u32;
typedef signed int s32;
typedef float f32;

struct Target {
    char p0[0x134];
    float m134;
};

struct Owner {
    char p0[0x7a0];
    void* m7a0;
    char p1[4];
    Target* m7a8;
    char p2[0x900 - 0x7ac];
    u32 m900;
};

extern "C" Target* func_0014E428(Owner* self, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern "C" u32 func_00564A78(void* res, void* name);

void func_004C0684(Owner* self, void* name, u32 extra) {
    Target* t = func_0014E428(self, 0, extra, 0, 0, 0, 0);
    self->m7a8 = t;
    if (name != 0) {
        f32 z = 0.0f;
        if (t != 0) t->m134 = z;
        self->m900 = func_00564A78(self->m7a0, name);
    }
}
