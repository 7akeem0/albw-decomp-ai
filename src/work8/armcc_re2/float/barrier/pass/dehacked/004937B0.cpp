

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


extern char ro_006F6718[];

struct Obj4937B0 {
    void* m0;
    char _pad[0x24 - 4];
    u8 m24;
    u32 m28;
    u32 m2c;
    u32 m30;
    u32 m34;
    u32 m38;
    u32 m3c;
    u8 m40;
};

void* func_0048FB4C(void* self);

void setvt(Obj4937B0*o,void*p){o->m0=p;}
template<class T0> inline void hlp0(T0 o) { o->m2c = 0;
    o->m30 = 0; }
Obj4937B0* func_004937B0(Obj4937B0* self) {
    Obj4937B0* o = (Obj4937B0*)func_0048FB4C(self);
    o->m24 = 0;
    o->m28 = 0;
    setvt(o,ro_006F6718);
    hlp0(o); 
    o->m34 = 0;
    o->m38 = 0;
    o->m3c = 0;
    o->m40 = 1;
    return o;
}
