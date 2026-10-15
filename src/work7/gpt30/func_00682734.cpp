#include "range.h"
struct Receiver00682734;
struct Delegate00682734 {
    virtual bool invoke(void*);
    Receiver00682734* owner;
    bool(Receiver00682734::*callback)(void*);
};
bool Delegate00682734::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
