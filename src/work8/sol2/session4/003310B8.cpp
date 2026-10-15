

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
extern char ro_006E18E0[];
extern "C" char* func_00150E40(void*);
extern "C" u32 func_0054D964(void*,int);
struct Tag{u32 v;Tag(){}};extern "C" void* func_0010BAB4(u32,Tag);
extern "C" void* func_004EDC9C(void*);

char* phase(char*s,u32 z,u32 vt) {

    *(u32*)(s+0x40c)=z;
    *(u32*)(s + 0x320) = vt+0x54;
    *(u32*)s = vt;
    *(u32*)(s + 0x410) = func_0054D964(s,z);
    void* m = func_0010BAB4(0x48,Tag());
    if (0 != m) m = func_004EDC9C(m);
    *(u32*)(s + 0x414) = (u32)m;
    return s;
}
extern "C" char*func_003310B8(char*self){return phase(func_00150E40(self),0,(u32)ro_006E18E0);}