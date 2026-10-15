typedef unsigned char u8;
typedef unsigned int u32;

extern "C" int func_0010AA40(void*, u32);
extern "C" u8 data_00716790[];
extern "C" u32 data_0072581C;
extern "C" u32 data_00716798;
extern "C" u8 ro_006BE004[];

int func_00108534() {
    u32* g = (u32*)data_00716790;
    if (g[1] == 0) {
        int r = func_0010AA40(&data_0072581C, *(u32*)(ro_006BE004 + 4));
        if (!((r & (int)0x80000000) < 0)) {
            *(u8*)g = 1;
            data_00716798 = data_0072581C;
        } else {
            if (r == 0xd92103fb) return r;
        }
    }
    g[1] = g[1] + 1;
    return 0;
}
