typedef unsigned char u8;
typedef unsigned int u32;

extern "C" int func_0010AA40(void*, u32);
extern "C" u32 data_0071678C;
extern "C" u32 data_00725818;
extern "C" u32 data_0072581C;
extern "C" u32 data_00716798;
extern "C" u8 ro_006BDFFC[];

int func_001085B0() {
    u32* g = &data_0071678C;
    if (g[0] == 0) {
        int r = func_0010AA40(&data_00725818, *(u32*)(ro_006BDFFC + 4));
        if (!((r & (int)0x80000000) < 0)) {
            u32 v = data_00725818;
            data_0072581C = v;
            data_00716798 = v;
        } else {
            if (r == 0xd92103fb) return r;
        }
    }
    g[0] = g[0] + 1;
    return 0;
}
