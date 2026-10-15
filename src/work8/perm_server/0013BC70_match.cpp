typedef unsigned char u8;
typedef unsigned int u32;

extern "C" bool func_00583B1C();
extern "C" bool func_005211BC(void* self, float a, float b);
extern "C" int func_0060C57C(void* self, int a, int b);

struct S {
    u8 pad[0x8ac];
    struct BF{u32 v;void set(u32 m){v|=m;}} m8ac;
    u8 pad2[0x984 - 0x8b0];
    u32 m984;
    int f();
};

int S::f() {
    if (!func_00583B1C()) return 0;
    if (func_005211BC(this, 2.5f, 0.0f)) {
        const u32 z = 0;
        m8ac.set(1);
        m984 = z;
        return func_0060C57C(this, z, z);
    }
    return func_0060C57C(this, 7, 0);
}
