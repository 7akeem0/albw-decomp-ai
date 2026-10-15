// 0x48C5EC
void* func_0057DE78(void*, int);
void func_00489F28(void*, void*, int, int, int);

struct Q {
    char p0[0x38];
    int m38;
};

struct P {
    char p0[0x5c];
    void* m5c;
};

void func_0048C5EC(P* self, Q* a1, int a2, int a3) {
    void* r = func_0057DE78(self, a2);
    if (!r) return;
    self->m5c = r;
    func_00489F28(r, a1, a2, a3, a1->m38);
}
