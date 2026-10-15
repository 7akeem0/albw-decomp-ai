
extern "C" void func_004B989C(void*);
extern "C" void func_00231448(void*);
extern "C" void func_002313DC(void*);
extern "C" void func_0012C790(void*);
struct Cls {
    char pad1[0xf]; unsigned char mF; char pad2[0x14 - 0x10]; void* m14;
    char pad3[0x1c - 0x18]; int m1C; char pad4[0x38 - 0x20]; short m38; short m3A;
    char pad5[0x40 - 0x3c]; int m40; char pad6[0x98 - 0x44];
    unsigned char m98; unsigned char m99; unsigned char m9A;
    char pad7[0x138 - 0x9b]; void* m138; void f();
};
void Cls::f() {
    m98 = 0;
    mF = 0x78;
    func_004B989C(*(void**)((char*)this + 0x10));
    func_00231448((char*)this + 0x38);
    char* p = (char*)this + 0x38;
    m40 = m1C;
    __schedule_barrier(); m3A = 0;
    m38 = 0;
    func_002313DC(p);
    func_0012C790(m138);
    m99 = 0;
    m9A = 0;
}
