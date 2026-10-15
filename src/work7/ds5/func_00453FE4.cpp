// 0x453FE4
extern "C" void func_001B6CE4(void*);
extern "C" int func_00532C78(void*);
struct Sub {
    char pad[0xd];
    unsigned char mD;
    unsigned char mE;
};
struct Cls {
    char pad1[0x9c];
    Sub* m9C;
    bool f();
};
bool Cls::f() {
    func_001B6CE4(this);
    if (func_00532C78((char*)this + 0xb0) != 0) return false;
    if (func_00532C78((char*)this + 0x2c) != 0) return false;
    return m9C->mD == 0 && m9C->mE == 0;
}
