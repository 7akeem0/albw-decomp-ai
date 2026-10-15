#include "range.h"
struct Receiver00686058;
struct Delegate00686058 {
    virtual bool invoke(void*);
    Receiver00686058* owner;
    bool(Receiver00686058::*callback)(void*);
};
bool Delegate00686058::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
