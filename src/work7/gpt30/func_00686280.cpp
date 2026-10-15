#include "range.h"
struct Receiver00686280;
struct Delegate00686280 {
    virtual bool invoke(void*);
    Receiver00686280* owner;
    bool(Receiver00686280::*callback)(void*);
};
bool Delegate00686280::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
