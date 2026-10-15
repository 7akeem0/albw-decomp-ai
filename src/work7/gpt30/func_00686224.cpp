#include "range.h"
struct Receiver00686224;
struct Delegate00686224 {
    virtual bool invoke(void*);
    Receiver00686224* owner;
    bool(Receiver00686224::*callback)(void*);
};
bool Delegate00686224::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
