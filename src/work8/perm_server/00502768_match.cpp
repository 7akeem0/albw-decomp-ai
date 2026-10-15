

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


extern char ro_006EE328[];

struct New502768 {
    void* m0;
    char _pad[0xc];
    u8 m10;
    u8 m11;
    u8 m12;
    u8 m13;
    u32 m14;
    u32 m18;
    u32 m1c;
    u32 m20;
    u32 m24;
    u32 m28;
    u32 m2c;
};

void* func_0010DA7C(void* self, u32 a, u32 b);

New502768* func_00502768(void* self, u32 a, u32 b, u32 c) {
    New502768* o = (New502768*)func_0010DA7C(self, 0, 3);
    o->m0 = ro_006EE328;
    o->m10 = 0;
    o->m11 = (u8)c;
    o->m12 = 0;
    __schedule_barrier(); o->m13 = (u8)b; __schedule_barrier();
    o->m14 = 0;
    o->m18 = 0;
    o->m1c = 0;
    o->m20 = 0;
    o->m24 = 0;
    o->m28 = 0;
    o->m2c = 0;
    return o;
}
