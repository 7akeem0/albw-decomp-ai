

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


struct AEntry { u32 m0; u32 m4; f32 m8; u32 mC; f32 m10; };
struct AArr {
    u32 pad[3];
    s32 mNum;
    s32 mMax;
    AEntry* mData;
    AEntry& operator[](s32 i) { if ((u32)i < (u32)mNum) return mData[i]; return mData[0]; }
};

struct Sub510 { char _pad[0x38]; BF16 m38; };
struct VObj { virtual void vf0(u32 id, s32 arg); };

struct Obj4FC07C {
    char _pad[0x410];
    AArr* m410;
    u32 m414;
    char _pad2[0x510 - 0x418];
    char* m510;
    char _pad3[0x5a0 - 0x514];
    u32 m5a0;
    char _pad4[0x655 - 0x5a4];
    u8 m655;
    char _pad5[0x81c - 0x656];
    VObj* m81c;
    char _pad6[0x82a - 0x820];
    u8 m82a;
};

static inline void killbit(Obj4FC07C* self) {
    Sub510* s = (Sub510*)self->m510;
    BF16* q = &s->m38;
    q->reset(1);
}

bool func_004FC07C(Obj4FC07C* self, u32 id, s32 arg, s32 force) {
    AArr* a = self->m410;
    u32 cur = a ? (*a)[0].m0 : 0;
    if(cur==id)goto equal;
    {
        Obj4FC07C* p = self;
        if (!force && (s32)(p->m5a0 << 20) < 0) goto failed;
        if (arg < 0) arg = p->m655;
        if (p->m81c) {
            p->m81c->vf0(id, arg);
        } else {
            func_0016898C(p->m410, Req5C(id, arg, false));
        }
        killbit(p);
        p->m82a = 1;
        p->m414 = 0;
        return true;
    }
    failed:return false;
    equal:
    if (force || (s32)(self->m5a0 << 20) >= 0) {
        killbit(self);
    }
    goto failed;
}
