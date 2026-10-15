

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
extern "C" void func_00676AA0(void*, void*);
extern "C" void func_006769C4(void*, void*);
static __forceinline void sol1ctx_1(void* a0,void* a1){void* b0=a0;void* b1=a1;func_006769C4(b0,b1);}


extern "C" u32 func_003D8164(u32* a0, u32* a1, u32* a2, u32* a3) {
    u32 solstack[2];
    func_00676AA0(&solstack[1], (void*)(*a3 + 8));
    u32 p=solstack[1];
    if (p == 0) return 2;
    solstack[0]=*a2;
    sol1ctx_1((void*)(p + 8), &solstack[0]);
    *a1=*a2;
    u32 q = *a0;
    *a0 = *(u32*)(q + 4);
    return 0;
}
