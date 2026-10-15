#include "range.h"
struct Receiver00685F44;
struct Delegate00685F44 {
    virtual bool invoke(void*);
    Receiver00685F44* owner;
    bool(Receiver00685F44::*callback)(void*);
};
bool Delegate00685F44::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
