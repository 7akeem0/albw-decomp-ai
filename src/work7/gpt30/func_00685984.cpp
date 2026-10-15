#include "range.h"
struct Receiver00685984;
struct Delegate00685984 {
    virtual bool invoke(void*);
    Receiver00685984* owner;
    bool(Receiver00685984::*callback)(void*);
};
bool Delegate00685984::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
