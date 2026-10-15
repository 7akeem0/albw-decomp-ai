#include "range.h"
struct Receiver00686B20;
struct Delegate00686B20 {
    virtual bool invoke(void*);
    Receiver00686B20* owner;
    bool(Receiver00686B20::*callback)(void*);
};
bool Delegate00686B20::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
