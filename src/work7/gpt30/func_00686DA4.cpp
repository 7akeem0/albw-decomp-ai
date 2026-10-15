#include "range.h"
struct Receiver00686DA4;
struct Delegate00686DA4 {
    virtual bool invoke(void*);
    Receiver00686DA4* owner;
    bool(Receiver00686DA4::*callback)(void*);
};
bool Delegate00686DA4::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
