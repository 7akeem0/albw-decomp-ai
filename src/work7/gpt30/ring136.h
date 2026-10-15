#ifndef GPT30_RING136_H
#define GPT30_RING136_H
#include "range.h"
struct Lock30 {u32 reserved,owner,count;void func_0010C0C0();void func_0010C160();};
struct LockScope30 {
    Lock30*lock;
    LockScope30(Lock30*p):lock(p){lock->func_0010C0C0();}
    virtual ~LockScope30(){lock->func_0010C160();}
};
struct Event30 {u8 storage[0x10];s32 func_003CD868(s32);};
struct Ring30 {
    u32* buffer;Event30 event;Lock30 lock;u32 capacity,head,count;s32 waiting;
    void put(u32);
    void notify();
};
#endif
