

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef signed short s16;
typedef unsigned int u32;
typedef signed int s32;
typedef unsigned long long u64;
typedef float f32;

struct NoThrowTag {};
void* operator new(unsigned int size, NoThrowTag) throw();

struct Vec3 { f32 x, y, z; };

struct Req5C {
    char _pad[0x5c];
    Req5C(u32 id, u32 arg, bool b);
};
void func_0016898C(void* owner, const Req5C& req);

struct BitFlag {
    u32 v;
    void set(u32 m) { v |= m; }
    void clear(u32 m) { v &= ~m; }
};

struct BF16 {
    u16 v;
    BF16() {}
    BF16(u16 x) : v(x) {}
    void reset(u16 b) { *this = BF16(v & ~b); }
};

struct AnimElem { char _pad[0x10]; f32 m10; };
struct AnimArr {
    char _pad[0xc];
    s32 mNum;
    s32 mMax;
    AnimElem* mData;
    AnimElem& operator[](s32 i) { if ((u32)i < (u32)mNum) return mData[i]; return mData[0]; }
};


namespace sead {
class SafeString {
public:
    SafeString(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
}

struct Sub620 { char _pad[0x58]; f32 m58; char _pad2[0x60 - 0x5c]; f32 m60; f32 m64; };
struct Sub4A8 {
    u32 m0; u32 m4; f32 m8;
    void start(u32 n, u32 c = 0) { m4 = n; if (n) m8 = 1.0f / n; else m8 = 0.0f; m0 = c; }
};

struct Obj4E4CA0 {
    char _pad[0x478];
    void* m478;
    void* m47c;
    char _pad2[0x4a8 - 0x480];
    Sub4A8 sub4a8;
    char _pad3[0x4cc - 0x4b4];
    void* m4cc;
    char _pad4[0x5a9 - 0x4d0];
    u8 m5a9;
    char _pad5[0x60d - 0x5aa];
    u8 m60d;
    char _pad6[0x620 - 0x60e];
    Sub620* m620;
    char _pad7[0x671 - 0x624];
    u8 m671;
};

void func_004CF478(void* p, s32 a, s32 b);
void func_00151148(void* p, s32 a);
void func_00150A84(Obj4E4CA0* self, const sead::SafeString& s, s32 v);

void func_004E4CA0(Obj4E4CA0* self) {
    func_004CF478(self->m478, 1, 0);
    func_00151148(self->m4cc, 1);
    func_0016898C(self->m47c, Req5C(2, 0, false));
    self->m5a9 = 0;
    self->m60d = 0;
    self->m671 = 1;
    self->sub4a8.start(40);
    Sub620* p = self->m620;
    if (p) {
        p->m60 = 0.0f;
        p->m64 = 0.0f;
        p->m58 = 0.0f;
    }
    func_00150A84(self, sead::SafeString("SE_BombL_BORN"), 0);
}
