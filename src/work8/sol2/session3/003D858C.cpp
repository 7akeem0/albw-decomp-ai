

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
extern "C" s32 func_003D7634(void*, u32, void*);

static s32 parse(u32* self,u32 mode,u32 value){return func_003D7634(self,mode,&value);}
extern "C" s32 func_003D858C(u32* self, u32 a1, u32* a2) {
    u32 p = *self;
    *self = *(u32*)(p + 4);
    self[6] = self[6] + 1;
    s32 r=parse(self,a1,*a2);
    if (r != 0) return r;
    u32 q = *self;
    if (*(u8*)(q + 8) != 0xa) return 3;
    self[6] = self[6] - 1;
    *self = *(u32*)(q + 4);
    return 0;
}
