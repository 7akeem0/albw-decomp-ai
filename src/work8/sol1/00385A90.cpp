

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
extern u32 data_00709D28;
extern "C" void func_004A3700(u32);
extern "C" void func_004A9120(u32, u32);

struct Handle{u32 object,id;};struct ObjectId{char pad[0x1c];u32 id;};
static bool matches(u32 p,const Handle*h){return ((const ObjectId*)p)->id==h->id;}
extern "C" void func_00385A90(char* self) {
const Handle*h=(const Handle*)(self+0x1c4);
    u16 v = *(u16*)(self + 0xe4); *(u16*)(self + 0xe4) = (u16)(v >> 1);
    __schedule_barrier();
    u32 p=*(u32*)(self+0x1c4);
    if (0 != p) {
        if (matches(p,h)) {
            u32 x = *(u32*)(p + 0x3c);
            *(u32*)(p + 0x3c) = (x & ~0x44u) | 8u;
            func_004A3700(p); __schedule_barrier();
        }
    }
    *(u8*)(self + 0x3a) = 0xff; __schedule_barrier();
    if (*(u8*)(self + 0x34) != 0) {
        *(u8*)(self + 0x34) = 0;
        func_004A9120(data_00709D28, (u32)(0xb4 + self));
    }
}
