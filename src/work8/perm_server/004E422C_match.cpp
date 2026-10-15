

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


struct Out4E422C { char _pad[8]; Vec3 m8; };
struct Obj4E422C {
    char _pad[0x3d0];
    f32 m3d0, m3d4, m3d8;
};

void func_0066A8D8(void* p, u32 a);

u32 func_004E422C(Obj4E422C* self, Out4E422C* out) {
    out->m8.x = self->m3d0;
    out->m8.y = self->m3d4;
    out->m8.z = self->m3d8; __schedule_barrier();
    s8 k = *(s8*)((char*)self + 0x488);
    if (k != 1 && k != 3) return 0;
    func_0066A8D8((char*)self + 0x484, 4);
    return 0x15;
}

