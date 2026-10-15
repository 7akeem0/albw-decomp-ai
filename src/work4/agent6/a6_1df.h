#ifndef A6_1DF_H
#define A6_1DF_H
#include "a6.h"

struct Target40D {
    void func_0040D8C0(f32 v);   // vstr s0,[this,#0xe4]
    void func_0040D9C8(s32 v);   // m40A0=v; m96=v>0
};
struct Ref24 {
    bool isValid() const;        // 0x57D86C: return mPtr != 0;
    void func_00110DDC(s32 v);   // if (mPtr) mPtr->0x1110BC(v)
    Target40D* mPtr;
};
struct Link2C {
    void func_0025B70C();
};

// byte flags at Obj1DF+0x100. Taking 'Flags100& f = mFlags;' at function top hoists 'add rX,this,#0x100'
struct Flags100 {
    char pad[8];
    u8 m8;   // 0x108
    u8 m9;   // 0x109
    u8 ma;   // 0x10a
    u8 mb;
    u8 mc;
    u8 md;   // 0x10d
};

struct Obj1DF {
    virtual void vf00();
    bool func_001DFB30();
    bool func_001DFE4C();
    void func_001DFE74(Link2C* p);
    void func_001DFEB4(f32 v);
    void func_001DFECC(Link2C* p);
    void func_001DFEE0(s32 v);
    void func_001DFF3C(s32 a, s32 b);
    void func_001DFF84(u32 v);
    void stop(s32 b);

    char pad004[0x24 - 4];
    Ref24* m24;
    char pad028[0x2c - 0x28];
    Link2C* m2c;
    char pad030[0xe8 - 0x30];
    s32 me8;
    s32 mec;
    s32 mf0;
    s32 mf4;
    s32 mf8;
    char padfc[0x100 - 0xfc];
    Flags100 mFlags;          // 0x100..0x10d
};
#endif
