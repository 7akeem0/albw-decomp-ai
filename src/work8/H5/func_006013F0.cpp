typedef unsigned int u32;
typedef int s32;
typedef unsigned char u8;

struct Obj {
    u8 pad0[0x20];
    s32 m20;
    u8 pad1[4];
    s32 m28;
    u32 m2c;
};

struct G {
    u8 pad0[0x11];
    u8 b11;
    u8 b12;
    u8 pad1[0x9c - 0x13];
    Obj* m9c;
    Obj* ma0;
};

extern G bss_0079CAB8;

extern "C" void func_003E3F00(void);
extern "C" void func_0060226C(void);
extern "C" void func_003E3F10(void);

extern "C" void func_006013F0(Obj* o) {
    if (o == 0) return;
    if (bss_0079CAB8.b11 != 0) return;
    bss_0079CAB8.ma0 = o;
    bss_0079CAB8.b12 = 1;
    if (o->m28 >= o->m20) return;
    bss_0079CAB8.b11 = 1;
    if (o->m2c != 0x300) return;
    func_003E3F00();
    func_0060226C();
    func_003E3F10();
}
