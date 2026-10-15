typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct Game {
    char pad0[0x671];
    u8 m671;
};

struct Ctl { char pad0[0x10]; u32 m10; };

struct Self {
    void* m0;
    char pad4[0x184 - 4];
    void* m184;
};

struct VT {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5();
    virtual void v6(u32 k);
};

extern Game* data_007124F0;
extern Ctl* data_00712588;
extern void* data_00715160;
extern u32 bss_0079DF64;

void func_0010173C(u32 k);
void func_00322BF0(Self* s);
void func_0019AAFC(Game* g, s8* out);
u32 func_0010585C();
u32 func_00104A80();
void func_0010E0E0(void* p);
void func_006003D8(u32 k, void** out);
void func_005FF418(void* p);
void func_005FF760();
void func_0057D740();
void func_005FFC18();
u32 func_001022F4();
u32 func_0010EE40();
void func_003E35DC(u32 a, u32 b);
void func_00601390();
void func_0010E15C(void* p);
void func_006017F0();
void func_0014AD6C();
void func_00102A2C(u32 k);

void func_0032274C(Self* s) {
    if (data_007124F0->m671 == 0) return;
    if (data_00712588->m10 != 0) return;
    func_0010173C(1);
    func_00322BF0(s);
    s8 flag = 0;
    func_0019AAFC(data_007124F0, &flag);
    if (func_0010585C() != 0) {
        func_0014AD6C();
    } else if (func_00104A80() != 0) {
        func_0014AD6C();
    } else if (flag == 6 || flag == 4) {
        func_0014AD6C();
    } else {
        func_0010E0E0(data_00715160);
        void* h;
        func_006003D8(0x207, &h);
        func_005FF418(s->m184);
        func_005FF760();
        bss_0079DF64 = 0;
        ((VT*)s)->v6(3);
        func_0057D740();
        func_005FFC18();
        u32 r4 = func_001022F4();
        func_003E35DC(func_0010EE40(), r4);
        func_00601390();
        func_0010E15C(data_00715160);
        func_006017F0();
        func_005FF418(h);
        func_005FF760();
    }
    func_00102A2C(1);
}
