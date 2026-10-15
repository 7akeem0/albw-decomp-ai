#include "range.h"
struct Receiver006863F0;
struct Delegate006863F0 {
    virtual bool invoke(void*);
    Receiver006863F0* owner;
    bool(Receiver006863F0::*callback)(void*);
};
bool Delegate006863F0::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
