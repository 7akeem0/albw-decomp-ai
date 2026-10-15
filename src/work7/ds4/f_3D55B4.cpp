extern "C" int func_003D55B4(int a, int b, int c, int f) {
    int d = a - b;
    if (d < -c) return (short)(b + (((d + c) * f) >> 7));
    if (d > c) return (short)(b + (((d - c) * f) >> 7));
    return b;
}
