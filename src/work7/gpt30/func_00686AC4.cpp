#include "range.h"
struct Receiver00686AC4;
struct Delegate00686AC4 {
    virtual bool invoke(void*);
    Receiver00686AC4* owner;
    bool(Receiver00686AC4::*callback)(void*);
};
bool Delegate00686AC4::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
