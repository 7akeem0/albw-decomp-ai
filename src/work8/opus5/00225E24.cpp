typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

struct Req5C { u8 data[0x5c]; Req5C(u16 id, u32 arg, bool b); };
struct Entry { const char* name; u32 v; };
extern Entry bss_0074D3A4[];
extern Entry bss_0074D444[];
extern u8 data_0070B540[];
struct Res;
struct Ctrl;
void func_00169688(Ctrl* c, s32 i, const Entry* e, Res* r);
void func_00169608(Ctrl* c, s32 i, const void* e, Res* r);
void func_0016A02C(Ctrl* c, s32 a, s32 b, s32 d);
void func_0016898C(Ctrl* c, const Req5C& r);
void func_00168E9C(Ctrl* c, u32 v, s32 d);
struct Model { u8 pad[0x1c8]; Res* m1C8; };

struct Self {
    u8 pad0[0x2d0];
    Model* m2D0;
    u8 pad2d4[0x594 - 0x2d4];
    u32 m594;
    u8 pad598[0x68c - 0x598];
    Ctrl* m68C;
    Ctrl* m690;
    Ctrl* m694;
    u8 pad698[0x753 - 0x698];
    u8 m753;
    Ctrl* create(s32 n, s32 b);
    void init();
};

void Self::init()
{
    m68C = create(0x14, 1);
    Ctrl*& c0 = m68C;
    Res* res = m2D0->m1C8;
    for (s32 i = 0; i < 0x14; i++) func_00169688(m68C, i, &bss_0074D3A4[i], res);
    func_0016A02C(m68C, -1, -1, 0);
    func_0016898C(c0, Req5C(4, 10, false));
    func_00168E9C(c0, m594, 0);
    func_0016898C(c0, Req5C(1, 10, false));

    m690 = create(2, 1);
    Ctrl*& c1 = m690;
    for (s32 i = 0; i < 2; i++) func_00169688(m690, i, &bss_0074D444[i], res);
    func_0016A02C(m690, -1, -1, 0);
    func_0016898C(c1, Req5C(1, 10, false));

    m694 = create(1, 1);
    Ctrl*& c2 = m694;
    for (s32 i = 0; i < 1; i++) func_00169608(m694, i, data_0070B540, res);
    func_0016A02C(m694, -1, -1, 0);
    func_0016898C(c2, Req5C(0, 10, false));
    m753 = 0;
}

