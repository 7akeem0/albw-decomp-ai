typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;

struct Obj { char pad0[0x3c]; void* m3c; };
struct Q { u32 m0; u32 m4; u32 m8; };
struct Out { u32 a; u32 m4; char pad8[0x14 - 0x8]; u32 m14; u8 m18; u8 m19; };

void* func_0056AF9C(void* p);
u32 func_0056B8D4(void* p);
void* func_0056BA04(void* p);
u32 func_0056B6D8(void* q);
u32 func_0056B6F8(void* q);
u32 func_0056B720(void* q);
void func_0056B678(void* q, u32* dst);

bool func_0056D31C(Obj* self, u32 x, Out* out) {
    void* p = func_0056AF9C(self->m3c);
    if (p == 0) {
        return false;
    }
    if (func_0056B8D4(p) != 1) {
        return false;
    }
    Q* q = (Q*)func_0056BA04(p);
    out->a = func_0056B6D8(q);
    out->m14 = q->m8;
    out->m18 = (u8)func_0056B6F8(q);
    out->m19 = (u8)func_0056B720(q);
    func_0056B678(q, &out->m4);
    return true;
}
