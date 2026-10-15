#include "range.h"
struct Receiver00686110;
struct Delegate00686110 {
    virtual bool invoke(void*);
    Receiver00686110* owner;
    bool(Receiver00686110::*callback)(void*);
};
bool Delegate00686110::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
