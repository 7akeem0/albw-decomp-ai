typedef unsigned char u8;
typedef int s32;
typedef unsigned int u32;

template <typename T, int N> struct SafeArray {
    T mBuffer[N];
    T& operator[](s32 i) { T* p = mBuffer; if ((u32)i < N) p = &mBuffer[i]; return *p; }
};

struct Res10 {
    char pad[0xc];
    void* mc;
};
struct Res0 { char pad[0x10]; Res10* m10; };
struct Holder { Res0* m0; };
struct Actor {
    char pad[0x1c];
    Holder* m1c;
    char pad2[0xcc - 0x20];
    u8 mcc;
    char pad3[0xec - 0xcd];
    u8 mec[4];
};
struct Mgr7142B0;
extern Mgr7142B0* data_007142B0;
extern char data_007139F8[];

bool func_00532C78(void* p);
bool func_00547404(Mgr7142B0* m);
void func_003FF904(void* a, Res10* b);
void func_003FF898(void* a, Res10* b);
void* func_005229AC(void* a, void* b);
__attribute__((weak)) void func_0066D544(void* p, int n);

struct Obj {
    char pad0[0x1c];
    void* m1c;
    char pad20[0xf8 - 0x20];
    u8 mf8[0x140 - 0xf8];
    u8 m140[0x17c - 0x140];
    u8 m17c[5];
    u8 m181;
    char pad182[0x1e4 - 0x182];
    SafeArray<Actor*, 3> m1e4;
    char pad1f0[0x214 - 0x1f0];
    u32 m214;
    char pad218[0x230 - 0x218];
    u32 m230;
    Res10* res(u32 i) { return m1e4[i]->m1c->m0->m10; }
    Res0* res0(u32 i) { return m1e4[i]->m1c->m0; }
    void f();
};

void Obj::f() {
    Mgr7142B0** g = &data_007142B0;
    if (m181 != 6) {
        if (m1e4[m230]->mcc != 0xd) return;
        if (func_00547404(*g)) return;
        Res0* h = m1e4[m230]->m1c->m0; func_003FF904(m1e4[m230]->m1c->m0->m10->mc, h->m10);
        Res0* h2 = m1e4[m230]->m1c->m0;
        func_003FF898(func_005229AC(m1c, data_007139F8), h2->m10);
    } else {
        if (func_00532C78(mf8)) return;
        if (func_00532C78(m140)) return;
        if (func_00532C78(m1e4[m214]->mec)) return;
        if (func_00547404(*g)) return;
    }
    func_0066D544(m17c, 0x18);
}
