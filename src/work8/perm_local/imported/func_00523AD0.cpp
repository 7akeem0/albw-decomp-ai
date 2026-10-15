

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef signed short s16;
typedef unsigned int u32;
typedef signed int s32;
typedef unsigned long long u64;
typedef float f32;

struct NoThrowTag {
};
void* operator new(unsigned int size, NoThrowTag) throw();

struct Vec3 {
f32 x, y, z;
};

struct Req5C {
    char _pad[0x5c];
    Req5C(u32 id, u32 arg, bool b);
};
void func_0016898C(void* owner, const Req5C& req);

struct BitFlag {
    u32 v;
    void set(u32 m) {
v |= m;
}
    void clear(u32 m) {
v &= ~m;
}
};

struct BF16 {
    u16 v;
    BF16() {
}
    BF16(u16 x) : v(x) {
}
    void reset(u16 b) {
*this = BF16(v & ~b);
}
};

struct AnimElem {
char _pad[0x10];
f32 m10;
};
struct AnimArr {
    char _pad[0xc];
    s32 mNum;
    s32 mMax;
    AnimElem* mData;
    AnimElem& operator[](s32 i) {
if ((u32)i < (u32)mNum) return mData[i];
return mData[0];
}
};


struct Obj523AD0 {
    char _pad[0x2d8];
    u32 m2d8;
    u32 m2dc;
    char _pad2[0x2f0 - 0x2e0];
    u32 m2f0;
};

s32 func_00523AD0(Obj523AD0* self) {
  char perm_t72;
    if (self->m2dc == (u32)-1) return 0;
    const f32 z = 0.0f;
    u32 d = self->m2d8 - self->m2f0;
    f32 v = (f32)d * (1.0f / 60.0f);
    if ((perm_t72 = z) > v) v = z;
    return (s16)(s32)v;
}
