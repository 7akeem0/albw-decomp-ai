typedef unsigned int u32; typedef int s32; typedef unsigned char u8;
extern "C" {
extern void* data_0070FB60;
extern const u32 ro_0069FE24[];
u32 func_0055696C(void*, u32);
}
static u32 get(u32 id) { return func_0055696C(data_0070FB60, id); }
extern "C" int func_00243DA8(void* a, int b, int c, int mode) {
    int n = 0;
    for (int i = 0; i < 4; i++) {
        if (get(ro_0069FE24[i]) >= 2) n++;
    }
    u32 v = get(0);
    if (mode == 0) {
        if ((n == 2 || n == 3) && v == 3) return 0;
        if (n == 4) {
            if (v == 4) return 1;
            if (v == 3) return 2;
        }
        return 3;
    } else if (mode == 1) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        if ((n == 2 || n == 3) && v == 4) return 2;
        return 3;
    }
    return 0;
}
