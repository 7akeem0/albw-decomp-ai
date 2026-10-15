typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct Obj59c { char pad0[0x59c]; u32 m59c; };

struct Self {
    char pad0[0x10];
    Obj59c* m10;
    void* m14;
    void* m18;
    char pad1c[0x4c - 0x1c];
    u16 m4c;
    u16 m4e;
    char pad50[0x59 - 0x50];
    u8 m59;
    u8 m5a;
};

void func_004CF478(void* p, u32 a, u32 b);
void func_00383F14(Self* s);
void func_003839B4(Self* s);

void func_003840C4(Self* s) {
    if (s->m5a == 0) {
        func_004CF478(s->m14, 0, 0);
        func_004CF478(s->m18, 0, 0);
    } else {
        if (s->m4e != 0) s->m4e--;
        if (s->m4c != 0) {
            Obj59c* o = s->m10;
            --s->m4c;
            o->m59c &= ~0x80u;
            u32 k = s->m4c % 15;
            if (k < 7) {
                func_004CF478(s->m14, 0, 0);
                func_004CF478(s->m18, 0, 0);
            } else {
                func_004CF478(s->m14, 1, 0);
                func_004CF478(s->m18, s->m59 != 0, 0);
            }
        } else {
            func_004CF478(s->m14, 1, 0);
            func_004CF478(s->m18, s->m59 != 0, 0);
            s->m10->m59c |= 0x80;
        }
    }
    func_00383F14(s);
    func_003839B4(s);
}
