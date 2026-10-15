typedef unsigned int u32;

u32 func_00103CBC(u32 a);
void func_00564ABC(void* p, u32 r1, u32 r2);
struct Arg;
struct Sub50 { char p0[8]; u32 m8; };
struct Obj { char p0[0x50]; Sub50* m50; };
struct Arg { void** vt; u32 m4; };

extern "C" void func_00584CC8(Obj* self, Arg* arg) {
    u32 r5 = self->m50->m8;
    void** vt = arg->vt;
    ((void (*)(Arg*))vt[2])(arg);
    u32 r6 = arg->m4;
    char* r4 = (char*)r5 + 0x34;
    u32 r2 = func_00103CBC(r6);
    func_00564ABC(r4 + 4, r6, r2);
}
