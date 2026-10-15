typedef unsigned char u8;
typedef signed int s32;
typedef unsigned int u32;

extern "C" void* func_002C2D00(void*);
extern "C" void* func_0054DD54(u8*, u32);
extern "C" u8* func_0054DD3C(u8*, u32);

struct Obj {
    u8 pad[0x164];
    u32 m164;
};

Obj* func_0014DE98(u8* a0, void* a1) {
    Obj* r = (Obj*)func_002C2D00(a1);
    if (a0 != 0) {
        u8* sub = a0 + 0x18;
        for (s32 i = 0; i < 4; i++) {
            if (func_0054DD54(sub, i) != 0) {
                u8* q = func_0054DD3C(sub, i);
                if (q[2] != 0 && q[3] != 0) {
                    r->m164 |= 0x100000u;
                    break;
                }
            }
        }
    }
    return r;
}
