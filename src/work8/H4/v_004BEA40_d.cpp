typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;

struct Obj {
    char pad0[0x7a4];
    void* m7a4;
    char pad1[0x7b8 - 0x7a8];
    void* m7b8;
    char pad2[0x8fc - 0x7bc];
    u32 m8fc;
    char pad3[0x912 - 0x900];
    u8 m912;
    char pad4[0x917 - 0x913];
    s8 m917;
};

void func_00169A80(void* p);
void func_00168E9C(void* p, void* q, u32 z);
void func_004C06FC(Obj* self, void* p, u32 v);

void func_004BEA40(Obj* self, u32 flag) {
    if (self->m7a4 == 0) {
        return;
    }
    void** pp = &self->m7b8;
    if (self->m7b8 != 0 && self->m917 != 0 && flag == 0) {
        func_00169A80(self->m7b8);
        func_00168E9C(*pp, self->m7a4, 0);
    }
    func_004C06FC(self, self->m7a4, self->m8fc);
    self->m912 = 2;
}
