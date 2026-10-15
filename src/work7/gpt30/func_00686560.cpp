#include "range.h"
struct Receiver00686560;
struct Delegate00686560 {
    virtual bool invoke(void*);
    Receiver00686560* owner;
    bool(Receiver00686560::*callback)(void*);
};
bool Delegate00686560::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
