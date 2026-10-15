#include "range.h"
struct Receiver00686C90;
struct Delegate00686C90 {
    virtual bool invoke(void*);
    Receiver00686C90* owner;
    bool(Receiver00686C90::*callback)(void*);
};
bool Delegate00686C90::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
