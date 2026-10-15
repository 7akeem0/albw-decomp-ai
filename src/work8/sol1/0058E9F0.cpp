typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;

struct Iface {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual bool v5();
};
struct G { char pad0[0x18]; Iface* m18; };

extern G* data_007165A0;

u32 func_0040A32C(void* p, u32 a, u32 b, u32 c, u32 f);

static char* base58(void*s){char* b=(char*)s-4;return b;}
u32 func_0058E9F0(void* self, u32 a1, u32 a2, u32 a3, u32 fb) {
    char* base=base58(self);
    Iface* h = data_007165A0->m18;
    if (h->v5()) {
        return 0x80;
    }
    return (u8)func_0040A32C((void*)(base+4), a1, a2, a3, fb);
}
