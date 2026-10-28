

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


struct Sub5A { char _pad[8]; f32 m8; char _pad2[0x58 - 0xc]; f32 m58; };

struct Obj533644 {
    char _pad[0x18];
    Sub5A* m18;
};

u32 func_005896AC(Obj533644* self, u32 a, u32 b, Sub5A* other);

u32 func_00533644(Obj533644* self, u32 a, u32 b, Sub5A* other) {
    Sub5A* p = self->m18;
    if (0 == p) return 0;
    f32 f0 = p->m8;
    float f1 = p->m58;
    const f32 c = 0.5f;
    f32 v = f0 + f1 * c;
    if (v > ((float)(other->m8))) return 0;
    return func_005896AC(self, a, b, other);
}
