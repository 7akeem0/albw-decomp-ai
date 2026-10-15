// 0x438C0C
extern "C" void func_00232468(void*);
extern "C" void func_00166C00(void*, int);
extern "C" void func_00231448(void*);
extern "C" void func_002317C0(void*, float);
extern void* data_0070B850;
struct Obj { char pad[0xd]; unsigned char mD; unsigned char mE; };
struct Cls {
    char pad1[0x1a4];
    Obj* m1A4;
    char pad2[0x1b4 - 0x1a8];
    int m1B4;
    void f();
};
void Cls::f() {
    func_00232468(this);
    func_00166C00(data_0070B850, 1);
    if (m1B4 == -1) {
        Obj* o = m1A4;
        if (o->mD == 0 && o->mE == 0) {
            o->mE = 1;
            func_00231448((char*)this + 0x98);
            func_002317C0((char*)this + 0x74, 1.0f);
        }
    }
}
