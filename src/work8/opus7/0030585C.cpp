typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct Self {
    char pad0[0x38];
    u16 m38;
    char pad1[0x47c - 0x3a];
    void* m47c;
    char pad2[0x484 - 0x480];
    u32 m484;
    char pad3[0x4a4 - 0x488];
    void* m4a4;
    u8 m4a8;
};

extern void* data_00709D28;
extern s32 ro_00693338;
extern s32 ro_0069333C;

s32 func_00588BE4(Self* s);
s32 func_00588BF0(Self* s, s32 a);
void func_001E4158(Self* s);
void func_004CEAF0(void* p);
s32 func_0052F7F4(Self* s);
void func_00324964(Self* s);
void func_004A879C(void* p, u32 a, u32 b);
void func_002FCC34(void* p);
void func_00305A48(Self* s);

void func_0030585C(Self* s) {
    switch (s->m4a8) {
    case 0:
        if (func_00588BE4(s) == ro_00693338 || func_00588BE4(s) == ro_0069333C) {
            if (s->m38 != 0) {
                if (func_00588BF0(s, 1) != 0) {
                    func_00305A48(s);
                }
            }
        }
        return;
    case 1:
        func_001E4158(s);
        func_004CEAF0(s->m47c);
        if (func_0052F7F4(s) != 0) s->m4a8 = 3;
        return;
    case 2:
        func_001E4158(s);
        func_004CEAF0(s->m47c);
        if (func_0052F7F4(s) == 0) return;
        func_00324964(s);
        func_004A879C(data_00709D28, s->m484, 0);
        s->m4a8 = 0;
        return;
    case 3:
        func_002FCC34(s->m4a4);
        s->m4a8 = 4;
        return;
    case 4:
        return;
    }
}
