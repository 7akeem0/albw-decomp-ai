typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;

struct Obj { char pad0[0x3c]; void* m3c; };
struct Q { u32 a; u32 b; };
struct Out { u32 a; u32 b; u8 c; u8 d; };

void* func_0056AF9C(void* p);
u32 func_0056B8D4(void* p);
void* func_0056B9C4(void* p);
u32 func_0056B4A0(void* q);
u32 func_0056B4C8(void* q);

bool func_0056CDC0(Obj* self, u32 x, Out* out) {
    void* p = func_0056AF9C(self->m3c);
    if (p == 0) {
        return false;
    }
    if (func_0056B8D4(p) != 3) {
        return false;
    }
    Q* q = (Q*)func_0056B9C4(p);
    out->a = q->a;
    out->b = q->b;
    out->c = (u8)func_0056B4A0(q);
    out->d = func_0056B4C8(q) != 0;
    return true;
}
