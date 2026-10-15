#include "range.h"
struct Receiver00686504;
struct Delegate00686504 {
    virtual bool invoke(void*);
    Receiver00686504* owner;
    bool(Receiver00686504::*callback)(void*);
};
bool Delegate00686504::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
