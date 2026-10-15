



typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;

struct Sub {
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual void d31();
    virtual void d32();
    virtual void d33();
    virtual void d34();
    virtual void d35();
    virtual void d36();
    virtual void d37();
    virtual void d38();
    virtual void d39();
    virtual void d40();
    virtual void d41();
    virtual void d42();
    virtual void fn43(s32 k, s32 mask);
};

extern "C" void func_004BD280(void* self,s32 code,s32);

struct Self {
    char p0[0x9dc];
    Sub* m9dc;
    u8 m9e0;
};

void func_004DE8E0(Self* self,s32 code,s32 incoming5) {
    if (self->m9e0 == 1) {
        Sub* x = self->m9dc;
        if (x != 0) {
            u8 c = (u8)code;
            s32 k;
            if (c == 4) {
                k = 4;
            } else if (c == 0xf) {
                k = 5;
            } else if (c == 0x10) {
                k = 6;
            } else {
                return;
            }
            x->fn43(k, -1);
            return;
        }
    }
    if (code >= 0xe) return;
    func_004BD280(self,code,incoming5);
}
