#include "range.h"
struct Receiver00686E5C;
struct Delegate00686E5C {
    virtual bool invoke(void*);
    Receiver00686E5C* owner;
    bool(Receiver00686E5C::*callback)(void*);
};
bool Delegate00686E5C::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
