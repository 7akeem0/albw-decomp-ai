// 0x404F24
extern "C" void func_00404CF0(void*);
struct Sub {
    int m0;
    short m4;
    short m6;
    unsigned char m8;
    unsigned char m9;
    char pad2[2];
    short mC;
    short mE;
    int m10;
};
struct Cls {
    char pad[0x14];
    void f(Sub* s);
};
void Cls::f(Sub* s) {
    if (s == 0) return;
    unsigned mask = 0x30000;
    *(int*)((char*)this) = s->m0;
    *(short*)((char*)this + 4) = s->m4;
    *(short*)((char*)this + 6) = s->m6;
    *(unsigned char*)((char*)this + 9) = s->m8;
    *(int*)((char*)this + 8) =
        (*(int*)((char*)this + 8) & ~mask) | ((s->m9 << 16) & mask);
    *(int*)((char*)this + 0xc) = s->m10;
    *(short*)((char*)this + 0x10) = s->mC;
    *(short*)((char*)this + 0x12) = s->mE;
    func_00404CF0(this);
}
