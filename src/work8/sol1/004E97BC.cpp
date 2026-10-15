

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


struct Sub50_4E97BC { char _pad[0xdb]; s8 mdb; };

struct Obj4E97BC {
    char _pad[0x40];
    void* m40;
    char _pad2[0x50 - 0x44];
    Sub50_4E97BC* m50;
};

u32 func_0025BDA4(void* p);
void func_0025B6A8(void* p,u32 value);
u32 func_0025B74C(void* p, s32 v);

u32 func_004E97BC(Obj4E97BC* self, u32 a, void* b) {
    u32 r = func_0025BDA4(self->m40);
    u32 value=r;
    if(value==0 || b==0)return r;
    func_0025B6A8(b,value);
    return func_0025B74C(b, self->m50->mdb);
}
