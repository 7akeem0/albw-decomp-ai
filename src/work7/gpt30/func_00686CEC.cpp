#include "range.h"
struct Receiver00686CEC;
struct Delegate00686CEC {
    virtual bool invoke(void*);
    Receiver00686CEC* owner;
    bool(Receiver00686CEC::*callback)(void*);
};
bool Delegate00686CEC::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
