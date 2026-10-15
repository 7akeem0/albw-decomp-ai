typedef unsigned char u8;
typedef int s32;
typedef unsigned int u32;

template <typename T, int N> struct SafeArray {
    T mBuffer[N];
    T& operator[](s32 i) { if ((u32)i < N) return mBuffer[i]; return mBuffer[0]; }
};
struct Part {
    char pad[0x6c];
    u8 m6c;
    char pad6d[0xa8 - 0x6d];
    u8 ma8;
    bool isBusy() const { return m6c != 0 || ma8 != 0; }
};
struct G7142B0;
extern G7142B0* data_007142B0;
bool func_00547454(G7142B0* g);

struct Obj {
    char pad[0x1c4];
    SafeArray<Part*, 6> m1c4;
    Part* m1dc;
    Part* m1e0;
    char pad1e4[0x218 - 0x1e4];
    u8 m218;
    char pad219[0x224 - 0x219];
    u8 m224;
    void func_004576CC(s32 a, s32 b);
    void f();
};

void Obj::f() {
    if (m1dc->isBusy()) {
        func_004576CC(6, 0);
        m224 = 0;
        return;
    }
    if (m1e0->isBusy()) {
        func_004576CC(7, 0);
        m224 = 0;
        return;
    }
    for (s32 i = 0; i < 6; i++) {
        if (m1c4[i]->m6c != 0 || m1c4[i]->ma8 != 0) {
            func_004576CC(i, 0);
            m224 = 0;
            return;
        }
    }
    if (m218 != 0) return;
    if (func_00547454(data_007142B0)) m224 = 1;
}
