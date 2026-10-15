typedef unsigned char u8;
typedef signed char s8;
typedef unsigned int u32;
typedef int s32;

struct Sub { char p[0x134]; float f134; };
struct Self {
    char p0[0x480]; void* m480; void* m484; char p1[4]; void* m48c;
    char p2[0x4c0 - 0x490]; void* m4c0;
    char p3[0x4ca - 0x4c4]; u8 m4ca; u8 m4cb; u8 p4; u8 m4cd;
};

extern "C" void func_004CF478(void* p, s32 a, s32 b);
extern "C" s32 func_00588BF0(Self* self, s32 k);
extern "C" s32 func_0055696C(void* p, u32 k);
extern "C" const u32 ro_006A2B24[];
extern "C" void* data_0070FB60;

extern "C" void func_00194ACC(Self* self) {
    if (self->m480) func_004CF478(self->m480, 0, 0);
    s32 r5 = 0;
    if (0 == self->m4cb && self->m4cd != 3) {
        if (self->m4ca == 1 && func_00588BF0(self, 0) && !func_00588BF0(self, 1)) {
            r5 = 1;
        } else {
            s32 idx = self->m4ca; if (idx >= 10) idx = 0;
            s32 res = func_0055696C(data_0070FB60, ro_006A2B24[idx]);
            if (res == 1 || self->m4cd == 2) r5 = 1;
        }
    }
    void* a = self->m48c;
    void*& ra = self->m48c;
    if (a) { ((Sub*)a)->f134 = 0.0f; func_004CF478(ra, r5, 0); }
    void*& rb = self->m484;
    void* b = self->m484;
    if (b) { ((Sub*)b)->f134 = 0.0f; func_004CF478(rb, r5 ^ 1, 0); }
    if (self->m4c0) ((u8*)self->m4c0)[0x44] = 1;
    self->m4cd = 0;
}
