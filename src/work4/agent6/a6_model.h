#ifndef A6_MODEL_H
#define A6_MODEL_H
#include "a6.h"
// Model at Cls+0x600 (anim/model holder, model ptr at +0x10)
struct Model600 {
    void func_0028C3E8(s32 a, s32 b);
    void func_0028C788(s32 a);
    void func_0028C854(s32 a, s32 b);
    void func_0028C8A0(s32 a);
};
// 25 sub-model components at Cls+0x630 (model ptr at +4)
struct SubModel {
    virtual void vf00();
    virtual void vf04();
    virtual void vf08();
    virtual void vf0C();
    virtual void vf10();
    virtual void vf14(s32 a, s32 b);
    virtual void vf18();
    virtual void vf1C(s32 a);
    void func_002D41B0(s32 a, s32 b);
    void func_002D4210(s32 a);
};
#endif
