

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


struct G5136F4 { char _pad[0x18]; s8 m18; };
struct Obj5136F4 { char _pad[0x2c]; s16 m2c; char _pad2[0x2d7 - 0x2e]; u8 m2d7; };

extern void* data_00709DF8;
extern void* data_0070C8E0;

void func_001BACF8(void* p,int value);

void func_005136F4(Obj5136F4* self) {
    G5136F4* g = (G5136F4*)data_00709DF8;
    s8 k = g->m18;
    if (!((u32)k > 5 && (u32)(k - 0x16) > 4)) {
        if (1 <= self->m2c) func_001BACF8(data_0070C8E0,self->m2c);
    }
    self->m2d7 = 1;
}
