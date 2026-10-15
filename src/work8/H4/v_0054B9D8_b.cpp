typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;

struct Mgr { char pad0[0x8e8]; u8 m8e8; u8 m8e9; };
struct Cfg { char pad0[0x25]; u8 m25; };
struct Ctx { char pad0[1]; };

extern void* data_0070FB60;
extern Cfg* data_00712468;
extern Mgr* data_00711DE8;

u32 func_00556A2C(void* p);
u32 func_00556A9C(void* p);

s32 func_0054B9D8() {
    s32 a = (s32)func_00556A2C(data_0070FB60);
    s32 b = (s32)func_00556A9C(data_0070FB60);
    if (data_00712468->m25 == 3) {
        a = data_00711DE8->m8e8;
        b = data_00711DE8->m8e9;
    }
    s32 lo = 0;
    s32 hi = 100;
    s32 d = a - b;
    if (d < 0) {
        return lo;
    }
    if (d > 100) {
        return hi;
    }
    return d;
}
