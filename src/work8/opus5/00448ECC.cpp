typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;

struct Ctl { u8 pad[0xc]; };
void func_00231448(void* c);
void func_002317C0(void* c, f32 v);
struct Obj20C;
void func_004727B8(Obj20C* o, s32 v);
struct Obj210 { u8 pad[0x5d]; u8 m5D; };
void func_0047E8C4(Obj210* o, s32 a, s32 b);
struct Obj14 {
    u8 pad[4];
    s32 m4;
    u8 pad8[0x16 - 8];
    void setM4(s32 p) { m4 = p; u32 b = (u32)p; if (b) b = 1; u16* pf = &m16.v; u16 fl = *pf; if (b) fl |= 0x40; else fl &= (u16)~0x40; *pf = fl; }
    struct BF { u16 v; void change(u16 m, bool on) { if (on) v |= m; else v &= ~m; } } m16;
};
void func_002C00A8(Obj14* o);
struct FlagMgr;
extern FlagMgr* data_0070B728;
bool func_00584B94(FlagMgr* m, s32 id);
struct Obj214;
void func_001B6C2C(Obj214* o);

struct Self {
    u8 pad0[0x14];
    Obj14* m14;
    u8 pad18[0xf8 - 0x18];
    Ctl mF8;
    Ctl m104;
    Ctl m110;
    Ctl m11C;
    u8 pad128[0x15c - 0x128];
    s8 m15C;
    u8 pad15d[0x208 - 0x15d];
    u8 m208;
    u8 pad209[3];
    Obj20C* m20C;
    Obj210* m210;
    Obj214* m214;
    s32 m218;
    u8 pad21c[0x292 - 0x21c];
    u8 m292;
    void f448700();
    void f44AEC8();
    void update();
};

void Self::update()
{
    m292 = 0;
    f32 one = 1.0f;
    if (m210->m5D == 0) {
        func_00231448(&m104);
        func_002317C0(&mF8, one);
        func_004727B8(m20C, 1);
        func_002C00A8(m14);
        Obj14* o = m14; __schedule_barrier();
        o->setM4(m218);
        if (func_00584B94(data_0070B728, 0x20a)) func_001B6C2C(m214);
        if (m208 != 0) f448700();
        if (m15C == 2 || m15C == 1) f44AEC8();
    }
    func_00231448(&m11C);
    func_002317C0(&m110, one);
    func_0047E8C4(m210, 1, 0);
}





