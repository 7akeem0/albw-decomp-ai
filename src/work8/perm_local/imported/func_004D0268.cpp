

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


struct Sub150 {
char _pad[0x15];
u8 m15;
};

struct Obj4D0268 {
    char _pad[0x150];
    Sub150* m150;
};

void func_004D0268(Obj4D0268* self, s32 v) {
    f32 lo = 0.0f;
    f32 x = (f32)v;
if (1) {  }
    f32 hi = 4.0f;
    if (x < lo) x = lo;
    else if (x > hi) x = hi;
    self->m150->m15 = (u8)(s32)x;
}
