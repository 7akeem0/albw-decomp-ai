typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;

struct Elem { char pad0[0x2c]; u32 m2c; u32 m30; };
struct Obj {
    char pad0[8];
    u32 m8;
    u32 m0c;
    Elem* m10;
    u32 m14;
    u32 m18;
    u32 m1c;
};

void func_003CC090(void* p, u32 a, u32 b) __attribute__((weak));

void func_005681C0(Obj* self, void* p) {
    func_003CC090(p, self->m8, 4 * self->m0c);
    Elem* begin = self->m10;
    Elem* end = begin + self->m14;
    if (begin != end) {
        u32 n = begin->m30 * 4;
        __schedule_barrier(); u32 a = begin->m2c;
        func_003CC090(p, a, n);
    }
    u32 cnt = self->m1c * 4;
    func_003CC090(p, self->m18, cnt);
}
