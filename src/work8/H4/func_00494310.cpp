typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;

struct Node;
struct Mgr {
    virtual void s0();
    virtual void s1();
    virtual void s2();
    virtual void s3();
    virtual void s4();
    virtual void s5();
    virtual void s6();
    virtual s32 s7(Node* n, s32 k);
};
struct Node {
    virtual void n0();
    virtual void n1();
    virtual void n2();
    void* m4;
};
struct Owner { char pad0[0x50]; Mgr* m50; };

u32 func_00494310(Owner* self, u8* out, Node* n) {
    if (self->m50 == 0) return 0;
    n->n2();
    if (n->m4 == 0) return 0;
    s32 r = self->m50->s7(n, 0);
    *out = (r != 0) ? 1 : 0;
    return 1;
}
