


typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;

extern "C" s32 func_003D5730();
extern "C" s32 func_003D121C();
extern "C" void func_003D0FE8();

struct Flags { u8 b0; u8 b1; u8 b2; };
extern "C" Flags data_00714928;

s32 func_003CEC70() {
    s32 r = 0;
    if (data_00714928.b0 != 0) {
        if (data_00714928.b1 != 0) {
            s32 x = func_003D5730();
            u32 sg = (u32)x >> 31;
            if (sg != 0) return x;
            data_00714928.b2 = 0;
            data_00714928.b1 = 0;
        }
        s32 x2=func_003D121C();
        u32 sg2=(u32)x2>>31;
        r=x2;
        if (sg2 != 0) return r;
        func_003D0FE8();
        data_00714928.b0 = 0;
    }
    return r;
}
