#ifndef A6_1E8_H
#define A6_1E8_H
#include "a6.h"
// object behind *(owner+0x1c8); methods at 0x1E8xxx (agent6)
struct ObjE34 {
    virtual void vf00(); virtual void vf04(); virtual void vf08(); virtual void vf0C();
    virtual void vf10(); virtual void vf14(); virtual void vf18(); virtual void vf1C();
    virtual void vf20(s32 a, s32 b);
    virtual void vf24();
    virtual void vf28(s32 a, s32 b, s32 c);
    virtual void vf2C(s32 a);
    virtual void vf30();
};
// 0x2D0-byte element of the array at Sys1C8+0x14
struct Item2D0 {
    virtual void vf00(); virtual void vf04(); virtual void vf08(); virtual void vf0C();
    virtual void vf10(); virtual void vf14();
    virtual void vf18();
    virtual void vf1C();
    virtual void vf20(); virtual void vf24(); virtual void vf28(); virtual void vf2C(); virtual void vf30();
    virtual void vf34(s32 a);
    char pad[0x2d0 - 4];
};
namespace sead {
class IDisposer {
public:
    virtual ~IDisposer();        // 0x4A1520
    void* mDisposerHeap;
    void* mListPrev;
    void* mListNext;
};
}
// ring of up to 5 Item2D0 (work buffer first, ring fields after)
struct Sys1C8 : public sead::IDisposer {
    virtual ~Sys1C8();           // 0x1E8E48
    void func_001E89AC();
    Item2D0& ringAt(s32 idx) {
        if (idx < 0)
            return mBuffer[0];
        s32 i = mHead + idx;
        if (i >= mSize)
            i -= mSize;
        return mBuffer[i];
    }
    Item2D0& back() { return ringAt(mNum - 1); }
    void func_001E8270();
    void func_001E8350();
    void func_001E8448();
    void func_001E8508();
    void func_001E85D8();
    void func_001E8620();
    void func_001E8A78();
    void func_001E8B28();
    void func_001E8BE4(s32 a);
    void func_001E8C34(s32 a, s32 b, s32 c);   // mE34->vf28(a, b, c)
    void func_001E8C4C(s32 a, s32 b);          // mE34->vf20(a, b)
    void func_001E8C64();                      // mE34->vf30()
    void func_001E8C7C(s32 a);                 // mE34->vf2C(a)
    u32 m10;
    Item2D0 mItems[5];         // 0x14
    Item2D0* mBuffer;          // 0xe24
    s32 mSize;                 // 0xe28
    s32 mHead;                 // 0xe2c
    s32 mNum;                  // 0xe30
    ObjE34* mE34;              // 0xe34 current
    char pade38[0xeb4 - 0xe38];
    s32 mEB4;
    char padeb8[0xef4 - 0xeb8];
    s32 mEF4;
};
// owner holding the Sys1C8 pointer at +0x1c8; each forwarder tail-calls the method placed right after it
// (armlink --branchnop turns that 'b' into 'mov r0,r0', KB #68)
struct Owner1C8 {
    char pad[0x1c8];
    Sys1C8* m1C8;
};
#endif
