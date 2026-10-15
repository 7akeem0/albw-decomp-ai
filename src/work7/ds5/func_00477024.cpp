// 0x477024
extern "C" int func_00520B48(void*);
extern void* data_00712450;
extern void* data_0070B728;
struct Cls {
    char pad1[0xd0];
    signed char mD0;
    char pad2[0x30c - 0xd1];
    unsigned char m30C;
    int f();
};
int Cls::f() {
    if (func_00520B48(data_00712450) != 0) return 0;
    if (data_0070B728 == 0) goto ok;
    if (((int*)data_0070B728)[0x44 / 4] == 0) goto ok;
    return 0;
ok:
    signed char v = mD0;
    if (v != 0 && v != 2) return 0;
    m30C = 1;
    return 1;
}
