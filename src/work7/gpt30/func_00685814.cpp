#include "range.h"
struct Receiver00685814;
struct Delegate00685814 {
    virtual bool invoke(void*);
    Receiver00685814* owner;
    bool(Receiver00685814::*callback)(void*);
};
bool Delegate00685814::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
