typedef unsigned int u32;
typedef int s32;

struct Arg { void** vt; u32 m4; };
struct Sub { char p0[0x140]; void* m140; };
struct Obj { char p0[0x24]; Sub* m24; };

u32 func_0057F260(void* p);
s32 func_0056D3E4(u32 a, u32 b);

extern "C" bool func_005883F8(Obj* self, Arg* arg) {
    void** vt = arg->vt;
    ((void (*)(Arg*))vt[2])(arg);
    u32 r4 = arg->m4;
    u32 r0 = func_0057F260(self->m24->m140);
    s32 r = func_0056D3E4(r0, r4);
    if (r == -1) return 1;
    return 0;
}
