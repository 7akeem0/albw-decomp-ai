#ifndef A6_H
#define A6_H
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef signed int s32;
typedef float f32;

// Life/HP counter at Cls+0x598 {cur, max, tick}
struct Life {
    void add(s32 delta, bool b);   // 0x149BD4
    void tick(bool heal);          // 0x149CA4
    bool isDead() const { return mCur == 0; }
    u8 mCur;
    u8 mMax;
    u8 mTick;
};
#endif
