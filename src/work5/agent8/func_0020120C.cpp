typedef unsigned char u8;
typedef unsigned int u32;
struct En;
void func_004FABDC(En* e, int a, int b, int c);
struct En {
    void f(int k);
};
void En::f(int k) {
    u8 c = k;
    if (c == 30 || (u32)(c - 14) <= 3)
        func_004FABDC(this, 4, -1, 0);
}
