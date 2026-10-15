typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;

struct Entry { u8 m0; u8 m1; u16 m2; u32 m4; u32 m8; u32 mc; };
extern Entry data_007111A8[];

struct Ctx {
    char pad0[0x434];
    u32 m434;
    char pad438[0x4c4 - 0x438];
    u32 m4c4;
    char pad4c8[0x620 - 0x4c8];
    u32 m620;
};

struct Obj {
    char pad0[0x10];
    Ctx* m10;
    char pad14[0x42 - 0x14];
    s16 m42;
};

struct Sub40c { char pad0[0x28]; u32 m28; };

bool func_0053F164(Obj* self) {
    Ctx* p = self->m10;
    Sub40c* s = (Sub40c*)((char*)p + 0x40c);
    if (p->m4c4 == 0) return 0;
    if (s->m28 != 0) return 0;
    if (p->m620 != 0) return 0;
    Entry*table=data_007111A8;
    s32 index=self->m42;
    Entry* e=table+index;
    if ((e->m4 & 0x200) == 0) return 1;
    if (e->m0 == 0x15) return 1;
    return 0;
}
