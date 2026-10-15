typedef unsigned int u32;

extern "C" bool func_005821DC(u32 base, u32 val) {
    u32 t = *(u32*)(0x7708u + base);
    if (t != 0) {
        if (t == val) return 0;
    }
    u32 p = *(u32*)(0x7704u + base);
    if (p != 0) {
        if (p == val) return 0;
    }
    return 1;
}
