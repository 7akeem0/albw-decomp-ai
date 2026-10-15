typedef unsigned int u32;
typedef int s32;
typedef signed char s8;
typedef unsigned char u8;

struct Ent { char p0[8]; u32 m8; char p1[4]; };
struct Sub { char p0[0x118]; };
struct Obj {
    char p0[0x8c];
    Sub* m8c;
};

extern "C" bool func_0058D680(Obj*self,u32 k){if(k<6){if(*(u8*)((char*)self+0x95)!=0){    char* s = (char*)self->m8c;
    s32 idx = *(s8*)((char*)self + 0x96);
    char* e = s + 0x118;
    if ((u32)idx < 2) e += idx * 16;
    if (((Ent*)e)->m8 != 0) return 1;

}}return 0;}
