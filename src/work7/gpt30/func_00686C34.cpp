#include "range.h"
struct Receiver00686C34;
struct Delegate00686C34 {
    virtual bool invoke(void*);
    Receiver00686C34* owner;
    bool(Receiver00686C34::*callback)(void*);
};
bool Delegate00686C34::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
