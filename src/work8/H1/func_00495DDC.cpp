typedef unsigned int u32;
typedef unsigned char u8;

extern void* data_00715190;
extern u8 bss_007A96F0;
void func_00492780(u8* p);
void func_0048B0A0(void* a, u8* b);
void func_004952C0(void* g, void* p);
void func_00494F50(void* g, u8* p);
void func_00495028(void* g, u8* p);
void func_0048AB2C(void);
void func_00495090(void* g);

typedef void (*FnPtr495DDC)(void*, void*);

extern "C" void func_00495DDC(u8* self) {
    void* g = data_00715190;
    func_00492780(self + 4);
    func_0048B0A0(self + 0xb0, self + 4);
    void* o = *(void**)(self + 0xb0);
    FnPtr495DDC f = (FnPtr495DDC)*(void**)((u8*)o + 0x10);
    f(self + 0xb0, self + 0xb4);
    func_004952C0(g, self + 0xb0);
    func_00494F50(g, self + 4);
    func_00495028(g, &bss_007A96F0);
    func_0048AB2C();
    func_00495090(g);
}
