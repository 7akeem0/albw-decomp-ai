// 0x4137E4 variants b
extern unsigned int g_randSeed;
unsigned int v4() {
    unsigned int& s = g_randSeed;
    s = s * 0x19660d + 0x3c6ef35f;
    return s >> 16;
}
unsigned int v5() {
    g_randSeed = g_randSeed * 0x19660d + 0x3c6ef35f;
    return g_randSeed >> 16;
}
unsigned int v6() {
    unsigned int s = g_randSeed;
    unsigned int k = 0x19660d;
    unsigned int c = 0x3c6ef35f;
    s = s * k + c;
    g_randSeed = s;
    return s >> 16;
}
unsigned int v7() {
    unsigned int s = g_randSeed;
    s = 0x3c6ef35f + s * 0x19660d;
    g_randSeed = s;
    return s >> 16;
}
