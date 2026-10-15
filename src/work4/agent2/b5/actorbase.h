// ActorBase layout from agent8 (work4/agent8/func_001DF43C.cpp): primary 21 virtual slots, secondary base @0x320
#ifndef A2_ACTORBASE_H
#define A2_ACTORBASE_H
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef signed int s32;
typedef float f32;

struct ActorBaseA {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual ~ActorBaseA();
    virtual void v5();  virtual void v6();  virtual void v7();  virtual void v8();
    virtual void v9();  virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    char padA[0x320 - 4];
};
struct ActorBaseB {
    virtual void b0();
};
class ActorBase : public ActorBaseA, public ActorBaseB {
public:
    virtual ~ActorBase();
};
#endif
