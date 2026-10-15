#include "range.h"
struct Receiver00686954;
struct Delegate00686954 {
    virtual bool invoke(void*);
    Receiver00686954* owner;
    bool(Receiver00686954::*callback)(void*);
};
bool Delegate00686954::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
