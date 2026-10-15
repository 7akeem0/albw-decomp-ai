typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;

struct Item4E41C8 {
    u8 p0;
    s8 m1;
    u8 p2[0x10 - 2];
    u16 m10;
};
struct Arg4E41C8 {
    u8 p0[0x2c];
    Item4E41C8* m2c;
};
struct Obj4E41C8 {
    u8 p0[0x3a0];
    u32 m3a0;
    u8 p1[0x674 - 0x3a4];
    void* m674;
    u8 p2[0x6cb - 0x678];
    u8 m6cb;
};
u32 func_0034C8F0(void* o, u32 v, Arg4E41C8* a);

extern "C" u32 func_004E41C8(Obj4E41C8* self, Arg4E41C8* a) {
    Item4E41C8* it = a->m2c;
    if (it == 0) return 1;
    s8 c = it->m1;
    if (func_0034C8F0(self->m674, self->m3a0, a) == 0) return 1;
    if(it->m10!=0)goto set;if(c!=9&&c!=0xd&&c!=0xa)return 1;set:self->m6cb=1;
    return 1;
}
