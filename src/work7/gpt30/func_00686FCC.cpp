#include "range.h"
struct Receiver00686FCC;
struct Delegate00686FCC {
    virtual bool invoke(void*);
    Receiver00686FCC* owner;
    bool(Receiver00686FCC::*callback)(void*);
};
bool Delegate00686FCC::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
