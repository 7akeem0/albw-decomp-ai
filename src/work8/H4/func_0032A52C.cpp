typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;

struct Blk6c { char pad0[0x6b]; u8 m6b; u8 m6c; };
struct Blk9d0 { char pad0[0x6c]; u8 m6c; };

void func_0032C7F8(char* p);

void func_0032A52C(char* self) {
    Blk6c* x = (Blk6c*)(self + 0x8f8);
    bool go = false;
    if (x->m6b != 0 && x->m6c == 0) {
        go = true;
    } else {
        u8 flag = self[0xa3b];
        Blk9d0* y = (Blk9d0*)(self + 0x9d0);
        if (flag != 0 && y->m6c == 0) go = true;
    }
    if (go) {
        func_0032C7F8(self + 0x8c4);
        func_0032C7F8(self + 0x99c);
    }
}
