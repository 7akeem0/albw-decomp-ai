

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


struct Obj4FA0B8 {
    char _pad[0x43c];
    void* m43c;
    char _pad2[0x5a0 - 0x440];
    u32 m5a0;
    char _pad3[0x829 - 0x5a4];
    u8 m829;
    char _pad4[0x84c - 0x82a];
    f32 m84c;
    char _pad5[0x897 - 0x850];
    u8 m897;
};

u32 func_0014F794(void* self);
void func_004F5174(Obj4FA0B8* self, u32 r);
void func_0034CA24(void* p);

template<class T0> inline void hlp0(T0 self) { self->m5a0 &= ~0xC000000u; }
u32 func_004FA0B8(Obj4FA0B8* self) {
    const u32 r = func_0014F794(self); 
    hlp0(self);
    self->m84c = 0.0f;
    func_004F5174(self, r);
    self->m829 = 0;
    self->m897 = 0;
    func_0034CA24(self->m43c);
    return r;
}
