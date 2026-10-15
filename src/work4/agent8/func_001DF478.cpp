// save-data block init (0xE00 bytes, CRC32 at 0xDFC). __aeabi_memclr=0x1164F4, __aeabi_memclr4=0x110490
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;

extern "C" void* memset(void* p, int c, unsigned int n);

namespace sead {
class Random {
public:
    u32 getU32();
};
}
extern sead::Random* data_00715388;
u32 func_004A143C(const void* p, u32 size);

#define fillZero(ptr, n) do { void* q_ = (ptr); memset(q_, 0, (n)); } while (0)

struct Sav00 {
    u32 m0;
    u32 m4;
    u32 m8;
    u8 pad[0x40 - 0xc];
    void init() { fillZero(this, sizeof(*this)); m0 = 8; m4 = 0; m8 = 0; }
};
struct Sav40 {
    u32 w[0x20];
    void init() { u32* q = w; memset(q, 0, sizeof(w)); }
};
struct SavC0 {
    u8 m0;
    u8 m1;
    u8 pad2[0x27 - 2];
    u8 m27;
    u8 pad28[0xc8 - 0x28];
    s8 mC8;
    s8 mC9;
    s8 mCA;
    u8 padCB[0x1a0 - 0xcb];
    void init() { fillZero(this, sizeof(*this)); m0 = 0xc; m1 = 0xc; m27 = 2; mC8 = -1; mC9 = -1; mCA = -1; }
};
struct Sav260 {
    u16 m0;
    u8 pad[0x100 - 2];
    void init(s32 id) {
        fillZero(this, sizeof(*this));
        if (id == 0xdead)
            m0 = data_00715388->getU32();
        else
            m0 = id;
    }
};
struct Sav360 {
    u8 pad[0xf0];
    u8 mF0[20];
    u8 pad2[0x200 - 0xf0 - 20];
    void init() { fillZero(this, sizeof(*this)); initF0(); } void initF0() { for (int i = 0; i < 20; i++) mF0[i] = i; }
};
struct Sav560 {
    u8 b[0x40];
    void init() { fillZero(this, sizeof(*this)); }
};
struct SavD60 {
    u8 b[0x20];
    void init() { fillZero(this, sizeof(*this)); }
};
struct SavD80 {
    u8 b[0x60];
    void init() { fillZero(this, sizeof(*this)); }
};

struct SaveData {
    Sav00 m000;
    Sav40 m040;
    SavC0 m0C0;
    Sav260 m260;
    Sav360 m360;
    Sav560 m560[32];
    SavD60 mD60;
    SavD80 mD80;
    u32 mDE0;
    u32 mDE4;
    u32 mDE8;
    u32 mDEC;
    u32 mDF0;
    u32 mDF4;
    u32 mDF8;
    u32 mDFC;

    void init(s32 id);
};

void SaveData::init(s32 id) {
    mDE0 = 0;
    mDE4 = 0;
    mDE8 = 0;
    mDEC = 0;
    mDF0 = 0;
    mDF4 = 0;
    mDF8 = 0;
    m0C0.init();
    m000.init();
    m260.init(id);
    m360.init();
    m040.init();
    for (int i = 0; i < 32; i++)
        m560[i].init();
    mD60.init();
    mD80.init();
    mDFC = func_004A143C(this, 0xdfc);
}
