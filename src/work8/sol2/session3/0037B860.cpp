

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;

static int value(char*p){return ((int(*)(void*))(*(void**)(*(char**)p+0xc)))(p);}
extern "C" int func_0037B860(char* self) {
    char* p = self + 0x3c;
    if (((int (*)(void*))(*(void**)(*(char**)p + 0x10)))(p) != 0) return 1;
    int r=value(p);
    if(r==-1)goto update;if(*(u32*)(p+0x34)==0xffffffffu)goto update;if(*(u32*)(p+0x34)==(u32)r)goto zero;return 1;update:*(u32*)(p+0x34)=r;zero:return 0;
}
