typedef unsigned char u8; typedef signed char s8; typedef short s16; typedef unsigned int u32; typedef int s32;
struct Entry { u8 pad[8]; s8 m8; s8 m9; u8 pad2[2]; };
struct Obj {
    u8 pad[0x790]; Entry* m790; Entry* m794; u8 pad798[0x7b0 - 0x798]; void* m7b0; u32 m7b4; void* m7b8;
    u8 pad7bc[0x853 - 0x7bc]; u8 m853; u8 m854; u8 m855;
};
static inline void apply(Obj* o, u32 v, s16* a, s16* b) {
    if (o->m7b0) { *a = o->m794 ? o->m794[v].m8 : o->m790[v].m8; }
    if (o->m7b8 && o->m794) *b = o->m794[v].m9;
}
extern "C" void func_004BF32C(Obj* o, s16* st, s16* a, s16* b) {
    if (*st == 1) {
        u8 v = o->m855; if (v == 1) return; *st = v; apply(o, v, a, b);
    } else if (*st == 0) {
        u8 v = o->m853; if (v == 0) return; *st = v; apply(o, v, a, b);
    }
}
