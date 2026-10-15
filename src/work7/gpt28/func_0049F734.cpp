#include "range.h"
struct Mutex49F7 { char bytes[4]; };
struct Holder49F7 { u32 m0;Mutex49F7 mutex; };
extern void func_0010C0B8(Mutex49F7*);
extern void func_0010EEE0(Mutex49F7*);
struct ScopedLock49F7 {
    Mutex49F7* mutex;
    ScopedLock49F7(Mutex49F7* p):mutex(p){func_0010C0B8(mutex);}
    virtual ~ScopedLock49F7(){func_0010EEE0(mutex);}
};
struct Object49F734 { char pad[0x5c];Holder49F7* holder;void update(u32); };
extern void func_0049F9C8(Object49F734*,u32,s32);
void Object49F734::update(u32 a) { ScopedLock49F7 lock(&holder->mutex);func_0049F9C8(this,a,0); }
