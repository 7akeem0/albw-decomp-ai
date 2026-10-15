

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

struct Obj50DD1C {
    char _pad[0x7a0];
    void* m7a0;
    char _pad2[0x840 - 0x7a4];
    u32 m840;
    u32 m844;
};

u32 func_00564A78(void* res, const sead::SafeString& name);

void func_0050DD1C(Obj50DD1C* self) {
    self->m840 = func_00564A78(self->m7a0, sead::SafeString("skl_root"));
    __schedule_barrier(); self->m844 = 1;
}
