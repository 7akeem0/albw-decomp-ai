

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
extern "C" u32 func_0055C4AC(void*, float);
extern "C" u32 func_0058A7D4(u32);
extern "C" u32 func_00111A64(void*);
extern "C" void func_003B147C(void*, u32, u32);

static s32 below(void*r,u32 n){return (s32)(((u64)func_00111A64(r)*n)>>32);}
extern "C" int func_003C09AC(char* self) {
    __schedule_barrier(); *(u8*)(*(u32*)(self + 0x48) + 0x918) = 0;
    *(u8*)(self + 0x62) = 0;
    const s8 k = *(s8*)(self + 0x70);
    if (k == 5 || 3 == k || k == 4) return 1;
    if (*(u32*)(self + 0x6c) >= 0xa) {
        if (func_0055C4AC(*(char**)(self + 0x48) + 0xb48, 0.7f) != 0) {
            if (below((void*)func_0058A7D4(*(u32*)(self+0x48)),0x65)<=5) {
                func_003B147C(self, 5, 0);
            }
        }
    }
    ((void (*)(void*, u32))(*(void**)(*(char**)self + 0xf8)))(self, 0);
    return 1;
}
