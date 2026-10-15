typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern "C" void* func_002C2D00(void*);
extern "C" void* func_0054DD54(u8*, u32);
extern "C" u8* func_0054DD3C(u8*, u32);
struct Obj { u8 pad[0x164]; u32 m164; };
struct S { u8 pad0[0x2d0]; u8* m2d0; u8 pad1[0x34c - 0x2d4]; Obj* m34c; };
Obj* func_0014E398(S* a0, void* a1, u32 a2) {
    u32 flag = a2;
    void* a1v = a1;
    u8* sub = a0->m2d0;
    Obj* r = (Obj*)func_002C2D00(a1v);
    if (sub != 0) {
        u8* p = sub + 0x18;
        for (s32 i = 0; i < 4; i++) {
            if (func_0054DD54(p, i) != 0) {
                u8* q = func_0054DD3C(p, i);
                if (q[2] != 0 && q[3] != 0) {
                    r->m164 |= 0x100000u;
                    break;
                }
            }
        }
    }
    return flag != 0 ? (a0->m34c = r) : r;
}
