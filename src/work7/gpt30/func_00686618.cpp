#include "range.h"
struct Receiver00686618;
struct Delegate00686618 {
    virtual bool invoke(void*);
    Receiver00686618* owner;
    bool(Receiver00686618::*callback)(void*);
};
bool Delegate00686618::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
