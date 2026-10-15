typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;

struct Q { virtual void f0(void* p, u32 z); };
struct Sub134 { char pad0[0x44]; u32 m44; Q* m48; char pad4c[4]; };
struct Obj {
    char pad0[0x5c];
    char* m5c;
    char pad60[0x134 - 0x60];
    Sub134 m134;
};

void func_00490A18(void* a, void* b);
void func_0049F9B0(Obj* self, s32 k, void* p);
void func_0010961C(void* p);
void func_00109698(void* p);

static inline void finishSub(Sub134* p, u32 z) {
    func_0010961C(p);
    Q* q = p->m48;
    if (q != 0) {
        q->f0(p, z);
    }
    p->m44 = z;
}

void func_0048D960(Obj* self) {
    func_00490A18(self->m5c + 0x130, (char*)self + 0x184);
    func_0049F9B0(self, 1, &self->m134);
    Sub134* p = &self->m134;
    finishSub(p, 0);
    func_00109698(p);
}
