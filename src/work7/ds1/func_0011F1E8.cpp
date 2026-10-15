// 0x11F1E8: compare n bytes; returns 1 if equal else 0.
typedef signed char s8;

int f(const s8* a, const s8* b, int n) {
    for (int i = 0; i < n; i++)
        if (a[i] != b[i])
            return 0;
    return 1;
}
