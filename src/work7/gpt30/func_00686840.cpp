#include "range.h"
struct Receiver00686840;
struct Delegate00686840 {
    virtual bool invoke(void*);
    Receiver00686840* owner;
    bool(Receiver00686840::*callback)(void*);
};
bool Delegate00686840::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
